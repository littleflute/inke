// xdwebView.cpp : implementation of the CXdwebView class
//

#include "stdafx.h"
#include "xdweb.h"

#include "xdwebDoc.h"
#include "xdwebView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXdwebView

IMPLEMENT_DYNCREATE(CXdwebView, CHtmlView)

BEGIN_MESSAGE_MAP(CXdwebView, CHtmlView)
	//{{AFX_MSG_MAP(CXdwebView)
	ON_WM_LBUTTONDOWN()
	ON_COMMAND(ID_XD_TEST, OnXdTest)
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CHtmlView::OnFilePrint)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXdwebView construction/destruction

CXdwebView::CXdwebView()
{
	// TODO: add construction code here

}

CXdwebView::~CXdwebView()
{
}

BOOL CXdwebView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CHtmlView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CXdwebView drawing

void CXdwebView::OnDraw(CDC* pDC)
{
	CXdwebDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
}

void CXdwebView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();

	// TODO: This code navigates to a popular spot on the web.
	//  change the code to go where you'd like.
//	Navigate2(_T("http://www.google.com/"),NULL,NULL);
//	Navigate2(_T("file:///D:/xd/html/tools/js/xdtest.html"),NULL,NULL);
	Navigate2(_T("file:///D:/xd/html/tools/js/xau1.html"),NULL,NULL);
}

/////////////////////////////////////////////////////////////////////////////
// CXdwebView printing


/////////////////////////////////////////////////////////////////////////////
// CXdwebView diagnostics

#ifdef _DEBUG
void CXdwebView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void CXdwebView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

CXdwebDoc* CXdwebView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CXdwebDoc)));
	return (CXdwebDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CXdwebView message handlers

void CXdwebView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// TODO: Add your message handler code here and/or call default
	AfxMessageBox("xd");
	CHtmlView::OnLButtonDown(nFlags, point);
}

void CXdwebView::OnXdTest() 
{
	Navigate2(_T("https://littleflute.github.io/a38/docs/cds/cd01"),NULL,NULL);
//	Navigate2(_T("file:///E:/Users/littleflute/Downloads/ls-v1009/ls/js/xdfollow.htm"),NULL,NULL);
	
//	Navigate2(_T("file:///E:/Users/littleflute/Downloads/ls-v1009/ls/js/JpInput.htm"),NULL,NULL);
//	Navigate2(_T("a38.html"),NULL,NULL);
	
}
