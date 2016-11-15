
// DrawStarView.h : CDrawStarView ��Ľӿ�
//

#pragma once

class CDrawStarCntrItem;

class CDrawStarView : public CView
{
protected: // �������л�����
	CDrawStarView();
	DECLARE_DYNCREATE(CDrawStarView)

// ����
public:
	CDrawStarDoc* GetDocument() const;
	// m_pSelection ����ѡ���ݱ����ڵ�ǰ�� CDrawStarCntrItem �С�
	// �������Ӧ�ó������ֳ�Ա����������
	//  ��ʾĳ��ѡ�������ڲ����� CDrawStarCntrItem �Ķ�����
	//  ѡ����һ����������  �ṩ����ѡ��
	//  ���Ƶ�Ŀ��ֻ�ǰ���������

	// TODO: ���ʺ�Ӧ�ó����ѡ������滻��ѡ�����
	CDrawStarCntrItem* m_pSelection;

// ����
public:

// ��д
public:
	virtual void OnDraw(CDC* pDC);  // ��д�Ի��Ƹ���ͼ
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void OnInitialUpdate(); // ������һ�ε���
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual BOOL IsSelected(const CObject* pDocItem) const;// ����֧��

// ʵ��
public:
	virtual ~CDrawStarView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	afx_msg void OnDestroy();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnInsertObject();
	afx_msg void OnCancelEditCntr();
	afx_msg void OnFilePrint();
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // DrawStarView.cpp �еĵ��԰汾
inline CDrawStarDoc* CDrawStarView::GetDocument() const
   { return reinterpret_cast<CDrawStarDoc*>(m_pDocument); }
#endif

