
// CntrItem.cpp : CDrawStarCntrItem ���ʵ��
//

#include "stdafx.h"
#include "DrawStar.h"

#include "DrawStarDoc.h"
#include "DrawStarView.h"
#include "CntrItem.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawStarCntrItem ��ʵ��

IMPLEMENT_SERIAL(CDrawStarCntrItem, COleClientItem, 0)

CDrawStarCntrItem::CDrawStarCntrItem(CDrawStarDoc* pContainer)
	: COleClientItem(pContainer)
{
	// TODO: �ڴ����һ���Թ������
}

CDrawStarCntrItem::~CDrawStarCntrItem()
{
	// TODO: �ڴ˴�����������
}

void CDrawStarCntrItem::OnChange(OLE_NOTIFICATION nCode, DWORD dwParam)
{
	ASSERT_VALID(this);

	COleClientItem::OnChange(nCode, dwParam);

	// �ڱ༭ĳ��ʱ(�͵ر༭����ȫ�򿪽��б༭)��
	//  �����������״̬�ĸ���
	//  �������ݵĿ������״̬�ĸ��ķ��� OnChange ֪ͨ��

	// TODO: ͨ������ UpdateAllViews ʹ������Ч
	//  (�����ʺ�����Ӧ�ó������ʾ)

	GetDocument()->UpdateAllViews(NULL);
		// ����ֻ����������ͼ/����ʾ
}

BOOL CDrawStarCntrItem::OnChangeItemPosition(const CRect& rectPos)
{
	ASSERT_VALID(this);

	// �͵ؼ����ڼ䣬���������� CDrawStarCntrItem::OnChangeItemPosition
	//  �Ը��ľ͵ش��ڵ�λ�á�
	//  ��ͨ�������ڷ�����
	//  �ĵ��е����ݸ��Ķ����·�Χ�ı����
	//  �͵ص�����С������ġ�
	//
	// �˴���Ĭ�����õ��û��࣬�û��ཫ����
	//  COleClientItem::SetItemRects �Խ�����
	//  �ƶ����µ�λ�á�

	if (!COleClientItem::OnChangeItemPosition(rectPos))
		return FALSE;

	// TODO: ���¸���ľ���/��Χ���ܴ��ڵ��κλ���

	return TRUE;
}

BOOL CDrawStarCntrItem::OnShowControlBars(CFrameWnd* pFrameWnd, BOOL bShow)
{
	CMDIFrameWndEx* pMainFrame = DYNAMIC_DOWNCAST(CMDIFrameWndEx, pFrameWnd);

	if (pMainFrame != NULL)
	{
		ASSERT_VALID(pMainFrame);
		return pMainFrame->OnShowPanes(bShow);
	}

	return FALSE;
}

void CDrawStarCntrItem::OnGetItemPosition(CRect& rPosition)
{
	ASSERT_VALID(this);

	// �͵ؼ����ڼ䣬������ CDrawStarCntrItem::OnGetItemPosition
	//  �Ծ��������λ�á�  ͨ����
	//  �þ��λᷴӳ�뼤��������ͼ 
	//  �����ĵ�ǰλ�á�  ���� 
	//  CDrawStarCntrItem::GetActiveView �ɵõ���ͼ��

	// TODO: ���� rPosition �е���ȷ����(�����ر�ʾ)

	CSize size;
	rPosition.SetRectEmpty();
	if (GetExtent(&size, m_nDrawAspect))
	{
		CDrawStarView* pView = GetActiveView();
		ASSERT_VALID(pView);
		if (!pView)
			return;
		CDC *pDC = pView->GetDC();
		ASSERT(pDC);
		if (!pDC)
			return;
		pDC->HIMETRICtoLP(&size);
		rPosition.SetRect(10, 10, size.cx + 10, size.cy + 10);
	}
	else
		rPosition.SetRect(10, 10, 210, 210);
}

void CDrawStarCntrItem::OnActivate()
{
    // ÿ�����ֻ����һ���͵ؼ�����
    CDrawStarView* pView = GetActiveView();
    ASSERT_VALID(pView);
	if (!pView)
		return;
    COleClientItem* pItem = GetDocument()->GetInPlaceActiveItem(pView);
    if (pItem != NULL && pItem != this)
        pItem->Close();
    
    COleClientItem::OnActivate();
}

void CDrawStarCntrItem::OnDeactivateUI(BOOL bUndoable)
{
	COleClientItem::OnDeactivateUI(bUndoable);

    DWORD dwMisc = 0;
    m_lpObject->GetMiscStatus(GetDrawAspect(), &dwMisc);
    if (dwMisc & OLEMISC_INSIDEOUT)
        DoVerb(OLEIVERB_HIDE, NULL);
}

void CDrawStarCntrItem::Serialize(CArchive& ar)
{
	ASSERT_VALID(this);

	// ���ȵ��û����Զ�ȡ COleClientItem ���ݡ�
	// ��Ϊ���������ô� CDrawStarCntrItem::GetDocument ���ص� m_pDocument ָ�룬
	//  ��������ȵ���
	//  ���� Serialize��
	COleClientItem::Serialize(ar);

	// ���ڴ洢/�����ض��� CDrawStarCntrItem ������
	if (ar.IsStoring())
	{
		// TODO: �ڴ���Ӵ洢����
	}
	else
	{
		// TODO: �ڴ���Ӽ��ش���
	}
}


// CDrawStarCntrItem ���

#ifdef _DEBUG
void CDrawStarCntrItem::AssertValid() const
{
	COleClientItem::AssertValid();
}

void CDrawStarCntrItem::Dump(CDumpContext& dc) const
{
	COleClientItem::Dump(dc);
}
#endif

