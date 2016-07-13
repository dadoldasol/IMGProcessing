
// ImageToolDoc.h : CImageToolDoc Ŭ������ �������̽�
//


#pragma once
#include ".\IppImage\IppDib.h"


class CImageToolDoc : public CDocument
{
protected: // serialization������ ��������ϴ�.
	CImageToolDoc();
	DECLARE_DYNCREATE(CImageToolDoc)

	// Ư���Դϴ�.
public:

	// �۾��Դϴ�.
public:

	// �������Դϴ�.
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

	// �����Դϴ�.
public:
	virtual ~CImageToolDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

	// ������ �޽��� �� �Լ�
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// �˻� ó���⿡ ���� �˻� �������� �����ϴ� ����� �Լ�
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
public:
	// ��Ʈ�� ��ü
	IppDib m_Dib;
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
	afx_msg void OnEditCopy();
	afx_msg void OnWindowDuplicate();
	afx_msg void OnImageInverse();
	afx_msg void OnBrightnessContrast();
	afx_msg void OnGammaCorrection();
	afx_msg void OnViewHistogram();
	afx_msg void OnHistoStretching();
	afx_msg void OnHistoEqualization();
	afx_msg void OnArithmeticLogical();
	afx_msg void OnBitplaneSlicing();
};
