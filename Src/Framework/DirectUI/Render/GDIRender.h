#ifndef GDIRender_h__
#define GDIRender_h__
/*/////////////////////////////////////////////////////////////
//
// �ļ�����	:	GDIRender.h
// ������		: 	daviyang35@gmail.com
// ����ʱ��	:	2014-11-09 16:49:29
// ˵��			:	GDI Render
/////////////////////////////////////////////////////////////*/
#pragma once
#include "Define/IUIRender.h"

class CGDIRender
	: public IUIRender
{
public:
	CGDIRender(void);
	virtual ~CGDIRender(void);

	// �����ɫ
	virtual void DrawColor(LPCRECT rcSrc,DWORD dwColor);
	// ����ɫ
	virtual void DrawGradient(LPCRECT rcSrc,DWORD dwStart,DWORD dwEnd,bool bVertical);
	// Բ�Ǿ��α߿�
	virtual void DrawRoundRectBorder(LPCRECT rcSrc, INT nCornerWidth, INT nCornerHeight, INT nBorderWidth, DWORD dwColor);
	// ���α߿�
	virtual void DrawRectangleBorder(LPCRECT rcSrc,LPCRECT rcBorder,DWORD dwColor);
	// ����
	virtual void DrawText(LPCRECT rcSrc,LPCTSTR lpszTextString);
	// ��ͼƬ
	virtual void DrawImage(ImageObject* pImageObj,LPCRECT rcSrc);
private:
	VOID GradientFill(LPCRECT rcSrc, DWORD dwStart, DWORD dwEnd, bool bVertical);
};

#endif // GDIRender_h__