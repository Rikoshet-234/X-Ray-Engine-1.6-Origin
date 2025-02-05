﻿// CodeGear C++Builder
// Copyright (c) 1995, 2020 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'ElDTPick.pas' rev: 34.00 (Windows)

#ifndef EldtpickHPP
#define EldtpickHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.SysUtils.hpp>
#include <System.Classes.hpp>
#include <Winapi.Windows.hpp>
#include <Winapi.Messages.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <ElACtrls.hpp>
#include <ElImgFrm.hpp>
#include <ElSpinBtn.hpp>
#include <ElTools.hpp>
#include <ElList.hpp>
#include <ElExtBkgnd.hpp>
#include <ElPopBtn.hpp>
#include <ElCalendarDefs.hpp>
#include <ElCalendDlg.hpp>
#include <ElVCLUtils.hpp>
#include <ElStrUtils.hpp>
#include <ElTmSchema.hpp>
#include <ElUxTheme.hpp>
#include <ElXPThemedControl.hpp>
#include <System.UITypes.hpp>

//-- user supplied -----------------------------------------------------------

namespace Eldtpick
{
//-- forward type declarations -----------------------------------------------
struct TDTFPart;
class DELPHICLASS TElDateTimePicker;
//-- type declarations -------------------------------------------------------
struct DECLSPEC_DRECORD TDTFPart
{
public:
	System::UnicodeString Text;
	int DPart;
	int TSPos;
	int TEPos;
	int SPos;
	int EPos;
};


typedef TDTFPart *PDTFPart;

enum DECLSPEC_DENUM TElDatePickerFormat : unsigned char { edfShortDateLongTime, edfLongDate, edfShortDate, edfLongTime, edfShortTime, edfCustom };

class PASCALIMPLEMENTATION TElDateTimePicker : public Elxpthemedcontrol::TElXPThemedControl
{
	typedef Elxpthemedcontrol::TElXPThemedControl inherited;
	
protected:
	Elstrutils::TElFChar FUnassignedChar;
	bool FHandleDialogKeys;
	bool FModified;
	bool FShowCheckBox;
	bool FChecked;
	bool FAltChangeMethod;
	bool FShowPopupCalendar;
	bool FNavigationInPopup;
	Vcl::Forms::TFormBorderStyle FBorderStyle;
	System::Classes::TNotifyEvent FOnChange;
	bool Use12Hours;
	Elpopbtn::TElGraphicButton* FCalButton;
	Elspinbtn::TElSpinButton* FButton;
	int FBtnWidth;
	Ellist::TElList* DTFParts;
	System::UnicodeString FFormatStr;
	TElDatePickerFormat FFormat;
	System::TDateTime FDate;
	bool FFocused;
	int FCurPart;
	System::Classes::TAlignment FAlignment;
	bool FMouseOver;
	Elcalenddlg::TElCalendarForm* FForm;
	HDC TmpDC;
	System::Classes::TNotifyEvent FOnDropDown;
	int FGradientSteps;
	System::Uitypes::TColor FGradientStartColor;
	System::Uitypes::TColor FGradientEndColor;
	Vcl::Graphics::TBitmap* FTmpBmp;
	bool FTransparent;
	Vcl::Graphics::TBitmap* FBackground;
	Elvclutils::TElBkGndType FBackgroundType;
	Elimgfrm::TImgFormChangeLink* FImgFormChLink;
	Elimgfrm::TElImageForm* FImgForm;
	Elvclutils::TElFlatBorderType FActiveBorderType;
	Elvclutils::TElFlatBorderType FInactiveBorderType;
	bool FFlat;
	System::TDateTime FMinDate;
	System::TDateTime FMaxDate;
	System::UnicodeString FDI;
	Elstrutils::TElFString FText;
	bool FDroppedDown;
	bool InDblClick;
	System::Classes::TNotifyEvent FOnCheckBoxChange;
	Elvclutils::TElBorderSides FBorderSides;
	System::Uitypes::TColor FLineBorderActiveColor;
	System::Uitypes::TColor FLineBorderInactiveColor;
	bool FButtonVisible;
	bool FUnassigned;
	System::Uitypes::TColor FUnassignedColor;
	bool FUnassignedAllowed;
	bool FReadOnly;
	bool FButtonShowOnFocus;
	bool FUseCurrentDate;
	bool FButtonThinFrame;
	bool FAutoSize;
	System::WideString FHint;
	bool FChangeDisabledText;
	HIDESBASE MESSAGE void __fastcall WMSize(Winapi::Messages::TWMSize &Msg);
	HIDESBASE MESSAGE void __fastcall WMSysKeyDown(Winapi::Messages::TWMKey &Msg);
	MESSAGE void __fastcall CMCancelMode(Vcl::Controls::TCMCancelMode &Msg);
	HIDESBASE MESSAGE void __fastcall CMCtl3DChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMFontChanged(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMSysColorChange(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseEnter(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall CMMouseLeave(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCPaint(Winapi::Messages::TMessage &Msg);
	HIDESBASE MESSAGE void __fastcall WMSetFocus(Winapi::Messages::TWMSetFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMKillFocus(Winapi::Messages::TWMKillFocus &Msg);
	HIDESBASE MESSAGE void __fastcall WMPaint(Winapi::Messages::TWMPaint &Msg);
	HIDESBASE MESSAGE void __fastcall WMEraseBkgnd(Winapi::Messages::TWMEraseBkgnd &Msg);
	HIDESBASE MESSAGE void __fastcall CMEnabledChanged(Winapi::Messages::TMessage &Msg);
	MESSAGE void __fastcall WMGetDlgCode(Winapi::Messages::TWMNoParams &Msg);
	HIDESBASE MESSAGE void __fastcall WMNCCalcSize(Winapi::Messages::TWMNCCalcSize &Message);
	HIDESBASE MESSAGE void __fastcall WMWindowPosChanged(Winapi::Messages::TWMWindowPosMsg &Message);
	MESSAGE void __fastcall IFMRepaintChildren(Winapi::Messages::TMessage &Message);
	DYNAMIC void __fastcall KeyDown(System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall SetBorderStyle(Vcl::Forms::TBorderStyle Value);
	void __fastcall SetImageForm(Elimgfrm::TElImageForm* newValue);
	void __fastcall SetTransparent(bool newValue);
	void __fastcall SetBackground(Vcl::Graphics::TBitmap* newValue);
	void __fastcall SetBackgroundType(Elvclutils::TElBkGndType newValue);
	void __fastcall ImageChange(System::TObject* Sender);
	void __fastcall ImageFormChange(System::TObject* Sender);
	void __fastcall SetGradientStartColor(System::Uitypes::TColor newValue);
	void __fastcall SetGradientEndColor(System::Uitypes::TColor newValue);
	void __fastcall SetGradientSteps(int newValue);
	void __fastcall RedoTmpBmp();
	void __fastcall DrawFlatBorder();
	void __fastcall InvalidateEdit();
	virtual void __fastcall CloseUp(bool AcceptValue);
	void __fastcall CalendarDeactivate(System::TObject* Sender);
	void __fastcall SpinUpClick(System::TObject* Sender, double Increment);
	void __fastcall SpinDownClick(System::TObject* Sender, double Increment);
	void __fastcall CalBtnClick(System::TObject* Sender);
	void __fastcall IncValue(int Increment);
	void __fastcall ParseFormat(System::UnicodeString AFormat);
	void __fastcall UpdatePart();
	void __fastcall UpdateFrame();
	void __fastcall UpdateText();
	void __fastcall OnDTFPartDelete(System::TObject* Sender, void * Item);
	System::UnicodeString __fastcall GetStdFormat(TElDatePickerFormat Fmt);
	void __fastcall TuneupCalendarControls();
	bool __fastcall GetCalendarUseLineColors();
	void __fastcall SetCalendarUseLineColors(bool Value);
	bool __fastcall StoreStartOfWeek();
	System::Uitypes::TColor __fastcall GetCalendarWeekendColor();
	void __fastcall SetCalendarWeekendColor(System::Uitypes::TColor Value);
	void __fastcall DrawFlatFrame(Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &R);
	void __fastcall SetBorderSides(Elvclutils::TElBorderSides Value);
	virtual void __fastcall SetFormat(TElDatePickerFormat newValue);
	virtual void __fastcall SetFormatStr(System::UnicodeString newValue);
	virtual void __fastcall SetDateTime(System::TDateTime newValue);
	virtual void __fastcall SetAlignment(System::Classes::TAlignment Value);
	virtual int __fastcall GetBtnWidth();
	virtual int __fastcall GetCheckDims();
	virtual int __fastcall GetCheckWidth();
	void __fastcall SetEditRect();
	virtual void __fastcall DropDown();
	virtual void __fastcall Paint();
	virtual void __fastcall DoDropDown();
	DYNAMIC void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y);
	virtual void __fastcall TriggerChangeEvent();
	virtual void __fastcall SetActiveBorderType(Elvclutils::TElFlatBorderType newValue);
	virtual void __fastcall SetInactiveBorderType(Elvclutils::TElFlatBorderType newValue);
	virtual void __fastcall SetFlat(bool newValue);
	virtual void __fastcall SetNavigationInPopup(bool newValue);
	virtual void __fastcall SetDate(System::TDateTime newValue);
	virtual System::TDateTime __fastcall GetDate();
	virtual void __fastcall SetTime(System::TDateTime newValue);
	virtual System::TDateTime __fastcall GetTime();
	bool __fastcall GetDroppedDown();
	virtual void __fastcall SetDroppedDown(bool newValue);
	Elcalendardefs::TDayOfWeek __fastcall GetStartOfWeek();
	void __fastcall SetStartOfWeek(Elcalendardefs::TDayOfWeek Value);
	Elcalendardefs::TElWeekEndDays __fastcall GetWeekEndDays();
	void __fastcall SetWeekEndDays(Elcalendardefs::TElWeekEndDays Value);
	void __fastcall SetCalendarLineColorLight(System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetCalendarLineColorDark();
	void __fastcall SetCalendarLineColorDark(System::Uitypes::TColor Value);
	System::Uitypes::TColor __fastcall GetCalendarLineColorLight();
	System::Uitypes::TColor __fastcall GetCalendarBackColor();
	void __fastcall SetCalendarBackColor(System::Uitypes::TColor Value);
	bool __fastcall GetUseSystemStartOfWeek();
	void __fastcall SetUseSystemStartOfWeek(bool Value);
	virtual void __fastcall Notification(System::Classes::TComponent* AComponent, System::Classes::TOperation operation);
	virtual void __fastcall CreateParams(Vcl::Controls::TCreateParams &Params);
	virtual void __fastcall Loaded();
	virtual void __fastcall CreateWindowHandle(const Vcl::Controls::TCreateParams &Params);
	void __fastcall AdjustHeight();
	void __fastcall UpdateHeight();
	virtual void __fastcall CreateWnd();
	virtual void __fastcall SetShowPopupCalendar(bool newValue);
	void __fastcall CalendarKeyDown(System::TObject* Sender, System::Word &Key, System::Classes::TShiftState Shift);
	void __fastcall CalendarChange(System::TObject* Sender);
	DYNAMIC void __fastcall DblClick();
	__property int BtnWidth = {read=GetBtnWidth, nodefault};
	virtual void __fastcall SetShowCheckBox(bool newValue);
	virtual void __fastcall SetChecked(bool newValue);
	virtual void __fastcall SetModified(bool newValue);
	void __fastcall TriggerCheckboxChangeEvent();
	Elvclutils::TElFlatBorderType __fastcall GetCalendarCurrentDayBorder();
	void __fastcall SetCalendarCurrentDayBorder(Elvclutils::TElFlatBorderType Value);
	Elvclutils::TElFlatBorderType __fastcall GetCalendarDayCellBorder();
	void __fastcall SetCalendarDayCellBorder(Elvclutils::TElFlatBorderType Value);
	Elvclutils::TElFlatBorderType __fastcall GetCalendarSelectionBorder();
	void __fastcall SetCalendarSelectionBorder(Elvclutils::TElFlatBorderType Value);
	void __fastcall SetMinDate(System::TDateTime Value);
	void __fastcall SetMaxDate(System::TDateTime Value);
	void __fastcall DoSetDateTime(System::TDateTime ADate);
	virtual System::WideString __fastcall GetThemedClassName();
	virtual void __fastcall SetUseXPThemes(const bool Value);
	Elspinbtn::TElSpinBtnDir __fastcall GetButtonDir();
	void __fastcall SetButtonDir(Elspinbtn::TElSpinBtnDir Value);
	Elspinbtn::TElSpinBtnType __fastcall GetButtonType();
	void __fastcall SetButtonType(Elspinbtn::TElSpinBtnType Value);
	void __fastcall SetButtonWidth(int Value);
	void __fastcall SetLineBorderActiveColor(System::Uitypes::TColor Value);
	void __fastcall SetLineBorderInactiveColor(System::Uitypes::TColor Value);
	void __fastcall UpdateButtonStyles();
	void __fastcall SetButtonVisible(bool Value);
	void __fastcall SetUnassigned(bool Value);
	void __fastcall SetUnassignedColor(System::Uitypes::TColor Value);
	void __fastcall SetUnassignedAllowed(bool Value);
	virtual bool __fastcall GetReadOnly();
	virtual void __fastcall SetReadOnly(bool Value);
	void __fastcall SetButtonShowOnFocus(bool Value);
	bool __fastcall IsDateTimeStored();
	void __fastcall SetButtonThinFrame(bool Value);
	HIDESBASE void __fastcall SetAutoSize(bool Value);
	void __fastcall SetHint(System::WideString Value);
	HIDESBASE MESSAGE void __fastcall CMHintShow(Winapi::Messages::TMessage &Message);
	Elstrutils::TElFString __fastcall GetUnassignedChar();
	void __fastcall SetUnassignedChar(Elstrutils::TElFString Value);
	Elstrutils::TElFString __fastcall MakeUnassignedString(int Length);
	void __fastcall SetChangeDisabledText(bool Value);
	
public:
	__fastcall virtual TElDateTimePicker(System::Classes::TComponent* AOwner);
	__fastcall virtual ~TElDateTimePicker();
	__property bool MouseOver = {read=FMouseOver, nodefault};
	__property bool DroppedDown = {read=GetDroppedDown, write=SetDroppedDown, nodefault};
	__property System::TDateTime Date = {read=GetDate, write=SetDate};
	__property System::TDateTime Time = {read=GetTime, write=SetTime};
	
__published:
	__property TElDatePickerFormat Format = {read=FFormat, write=SetFormat, default=0};
	__property System::UnicodeString FormatString = {read=FFormatStr, write=SetFormatStr};
	__property System::TDateTime DateTime = {read=FDate, write=SetDateTime, stored=IsDateTimeStored};
	__property System::Classes::TAlignment Alignment = {read=FAlignment, write=SetAlignment, default=0};
	__property Elimgfrm::TElImageForm* ImageForm = {read=FImgForm, write=SetImageForm};
	__property bool AutoSize = {read=FAutoSize, write=SetAutoSize, default=1};
	__property System::Uitypes::TColor GradientStartColor = {read=FGradientStartColor, write=SetGradientStartColor, default=0};
	__property System::Uitypes::TColor GradientEndColor = {read=FGradientEndColor, write=SetGradientEndColor, default=0};
	__property int GradientSteps = {read=FGradientSteps, write=SetGradientSteps, default=16};
	__property Vcl::Graphics::TBitmap* Background = {read=FBackground, write=SetBackground};
	__property Elvclutils::TElBkGndType BackgroundType = {read=FBackgroundType, write=SetBackgroundType, default=2};
	__property Vcl::Forms::TBorderStyle BorderStyle = {read=FBorderStyle, write=SetBorderStyle, default=1};
	__property bool Transparent = {read=FTransparent, write=SetTransparent, default=0};
	__property Elvclutils::TElFlatBorderType ActiveBorderType = {read=FActiveBorderType, write=SetActiveBorderType, default=1};
	__property Elvclutils::TElFlatBorderType InactiveBorderType = {read=FInactiveBorderType, write=SetInactiveBorderType, default=3};
	__property bool Flat = {read=FFlat, write=SetFlat, default=0};
	__property bool ShowPopupCalendar = {read=FShowPopupCalendar, write=SetShowPopupCalendar, default=0};
	__property bool NavigationInPopup = {read=FNavigationInPopup, write=SetNavigationInPopup, default=1};
	__property bool AltChangeMethod = {read=FAltChangeMethod, write=FAltChangeMethod, nodefault};
	__property bool ShowCheckBox = {read=FShowCheckBox, write=SetShowCheckBox, nodefault};
	__property bool Checked = {read=FChecked, write=SetChecked, default=1};
	__property bool Modified = {read=FModified, write=SetModified, nodefault};
	__property System::Uitypes::TColor CalendarLineColorDark = {read=GetCalendarLineColorDark, write=SetCalendarLineColorDark, default=-16777200};
	__property System::Uitypes::TColor CalendarLineColorLight = {read=GetCalendarLineColorLight, write=SetCalendarLineColorLight, default=-16777211};
	__property System::Uitypes::TColor CalendarBackColor = {read=GetCalendarBackColor, write=SetCalendarBackColor, default=-16777211};
	__property Elcalendardefs::TDayOfWeek StartOfWeek = {read=GetStartOfWeek, write=SetStartOfWeek, stored=StoreStartOfWeek, nodefault};
	__property bool UseSystemStartOfWeek = {read=GetUseSystemStartOfWeek, write=SetUseSystemStartOfWeek, nodefault};
	__property Elcalendardefs::TElWeekEndDays WeekEndDays = {read=GetWeekEndDays, write=SetWeekEndDays, nodefault};
	__property bool CalendarUseLineColors = {read=GetCalendarUseLineColors, write=SetCalendarUseLineColors, default=1};
	__property System::Uitypes::TColor CalendarWeekendColor = {read=GetCalendarWeekendColor, write=SetCalendarWeekendColor, nodefault};
	__property Elvclutils::TElBorderSides BorderSides = {read=FBorderSides, write=SetBorderSides, nodefault};
	__property Elvclutils::TElFlatBorderType CalendarCurrentDayBorder = {read=GetCalendarCurrentDayBorder, write=SetCalendarCurrentDayBorder, nodefault};
	__property Elvclutils::TElFlatBorderType CalendarDayCellBorder = {read=GetCalendarDayCellBorder, write=SetCalendarDayCellBorder, nodefault};
	__property Elvclutils::TElFlatBorderType CalendarSelectionBorder = {read=GetCalendarSelectionBorder, write=SetCalendarSelectionBorder, nodefault};
	__property System::TDateTime MinDate = {read=FMinDate, write=SetMinDate};
	__property System::TDateTime MaxDate = {read=FMaxDate, write=SetMaxDate};
	__property bool HandleDialogKeys = {read=FHandleDialogKeys, write=FHandleDialogKeys, default=0};
	__property Elspinbtn::TElSpinBtnDir ButtonDir = {read=GetButtonDir, write=SetButtonDir, nodefault};
	__property Elspinbtn::TElSpinBtnType ButtonType = {read=GetButtonType, write=SetButtonType, nodefault};
	__property int ButtonWidth = {read=FBtnWidth, write=SetButtonWidth, nodefault};
	__property System::Classes::TNotifyEvent OnChange = {read=FOnChange, write=FOnChange};
	__property System::Classes::TNotifyEvent OnDropDown = {read=FOnDropDown, write=FOnDropDown};
	__property System::Classes::TNotifyEvent OnCheckBoxChange = {read=FOnCheckBoxChange, write=FOnCheckBoxChange};
	__property Align = {default=0};
	__property Color = {default=-16777211};
	__property Ctl3D;
	__property DragCursor = {default=-12};
	__property DragMode = {default=0};
	__property Enabled = {default=1};
	__property Font;
	__property ParentColor = {default=1};
	__property ParentCtl3D = {default=1};
	__property ParentFont = {default=1};
	__property ParentShowHint = {default=1};
	__property PopupMenu;
	__property ShowHint;
	__property TabOrder = {default=-1};
	__property TabStop = {default=0};
	__property Visible = {default=1};
	__property OnClick;
	__property OnDblClick;
	__property OnDragDrop;
	__property OnDragOver;
	__property OnEndDrag;
	__property OnEnter;
	__property OnExit;
	__property OnKeyDown;
	__property OnKeyPress;
	__property OnKeyUp;
	__property OnMouseDown;
	__property OnMouseMove;
	__property OnMouseUp;
	__property System::Uitypes::TColor LineBorderActiveColor = {read=FLineBorderActiveColor, write=SetLineBorderActiveColor, nodefault};
	__property System::Uitypes::TColor LineBorderInactiveColor = {read=FLineBorderInactiveColor, write=SetLineBorderInactiveColor, nodefault};
	__property bool ButtonVisible = {read=FButtonVisible, write=SetButtonVisible, default=1};
	__property bool Unassigned = {read=FUnassigned, write=SetUnassigned, default=0};
	__property System::Uitypes::TColor UnassignedColor = {read=FUnassignedColor, write=SetUnassignedColor, default=255};
	__property bool UnassignedAllowed = {read=FUnassignedAllowed, write=SetUnassignedAllowed, default=0};
	__property bool ReadOnly = {read=GetReadOnly, write=SetReadOnly, default=0};
	__property bool ButtonShowOnFocus = {read=FButtonShowOnFocus, write=SetButtonShowOnFocus, default=0};
	__property bool UseCurrentDate = {read=FUseCurrentDate, write=FUseCurrentDate, default=1};
	__property bool ButtonThinFrame = {read=FButtonThinFrame, write=SetButtonThinFrame, default=1};
	__property Elstrutils::TElFString UnassignedChar = {read=GetUnassignedChar, write=SetUnassignedChar};
	__property bool ChangeDisabledText = {read=FChangeDisabledText, write=SetChangeDisabledText, default=0};
	__property System::WideString Hint = {read=FHint, write=SetHint};
public:
	/* TWinControl.CreateParented */ inline __fastcall TElDateTimePicker(HWND ParentWindow) : Elxpthemedcontrol::TElXPThemedControl(ParentWindow) { }
	
};


//-- var, const, procedure ---------------------------------------------------
}	/* namespace Eldtpick */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_ELDTPICK)
using namespace Eldtpick;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// EldtpickHPP
