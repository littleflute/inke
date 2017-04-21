// xdwebView.h : interface of the CXdwebView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XDWEBVIEW_H__F240CF21_348A_4CF1_94FA_DF5AF0121285__INCLUDED_)
#define AFX_XDWEBVIEW_H__F240CF21_348A_4CF1_94FA_DF5AF0121285__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXdwebView : public CHtmlView
{
protected: // create from serialization only
	CXdwebView();
	DECLARE_DYNCREATE(CXdwebView)

// Attributes
public:
	CXdwebDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXdwebView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CXdwebView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXdwebView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnXdTest();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in xdwebView.cpp
inline CXdwebDoc* CXdwebView::GetDocument()
   { return (CXdwebDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XDWEBVIEW_H__F240CF21_348A_4CF1_94FA_DF5AF0121285__INCLUDED_)
