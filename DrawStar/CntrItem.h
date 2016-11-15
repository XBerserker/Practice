
// CntrItem.h : CDrawStarCntrItem ��Ľӿ�
//

#pragma once

class CDrawStarDoc;
class CDrawStarView;

class CDrawStarCntrItem : public COleClientItem
{
	DECLARE_SERIAL(CDrawStarCntrItem)

// ���캯��
public:
	CDrawStarCntrItem(CDrawStarDoc* pContainer = NULL);
		// ע��: ���� pContainer Ϊ NULL ������ IMPLEMENT_SERIALIZE
		//  IMPLEMENT_SERIALIZE Ҫ������д���
		//  �����Ĺ��캯����  OLE ��ͨ������
		//  �� NULL �ĵ�ָ�빹���

// ����
public:
	CDrawStarDoc* GetDocument()
		{ return reinterpret_cast<CDrawStarDoc*>(COleClientItem::GetDocument()); }
	CDrawStarView* GetActiveView()
		{ return reinterpret_cast<CDrawStarView*>(COleClientItem::GetActiveView()); }

public:
	virtual void OnChange(OLE_NOTIFICATION wNotification, DWORD dwParam);
	virtual void OnActivate();

protected:
	virtual void OnGetItemPosition(CRect& rPosition);
	virtual void OnDeactivateUI(BOOL bUndoable);
	virtual BOOL OnChangeItemPosition(const CRect& rectPos);
	virtual BOOL OnShowControlBars(CFrameWnd* pFrameWnd, BOOL bShow);

// ʵ��
public:
	~CDrawStarCntrItem();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif
	virtual void Serialize(CArchive& ar);
};

