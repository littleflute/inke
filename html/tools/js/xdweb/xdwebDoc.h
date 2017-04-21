// xdwebDoc.h : interface of the CXdwebDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_XDWEBDOC_H__30FD3C83_CE46_4D0D_A24E_517D310FE78F__INCLUDED_)
#define AFX_XDWEBDOC_H__30FD3C83_CE46_4D0D_A24E_517D310FE78F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CXdwebDoc : public CDocument
{
protected: // create from serialization only
	CXdwebDoc();
	DECLARE_DYNCREATE(CXdwebDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXdwebDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CXdwebDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CXdwebDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XDWEBDOC_H__30FD3C83_CE46_4D0D_A24E_517D310FE78F__INCLUDED_)
