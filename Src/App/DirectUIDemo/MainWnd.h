#ifndef MainWnd_h__
#define MainWnd_h__
/*/////////////////////////////////////////////////////////////
//
// �ļ�����	:	MainWnd.h
// ������	: 	daviyang35@QQ.com
// ����ʱ��	:	2014-11-08 17:27:41
// ˵��		:	DirectUI Window���ٴ���
/////////////////////////////////////////////////////////////*/
#pragma once

class CMainWnd
	: public CWindowUI
	, public INotifyUI
{
public:
	CMainWnd(void);
	virtual ~CMainWnd(void);

	void Init();

	virtual void OnFinalMessage(HWND hWnd);

	virtual void Notify(TNotifyUI *pMsg);

};

#endif // MainWnd_h__