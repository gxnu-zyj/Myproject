#pragma once


// Sum 对话框

class Sum : public CDialogEx
{
	DECLARE_DYNAMIC(Sum)

public:
	Sum(CWnd* pParent = NULL);   // 标准构造函数
	virtual ~Sum();

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	int a;
	int b;
	int sum;
	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedButton1();
};
