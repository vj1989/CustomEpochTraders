///////////////////////////////////////////////////////////////////////////
/// Styles
///////////////////////////////////////////////////////////////////////////
// Control types
#define CT_STATIC           0
#define CT_BUTTON           1
#define CT_EDIT             2
#define CT_SLIDER           3
#define CT_COMBO            4
#define CT_LISTBOX          5
#define CT_TOOLBOX          6
#define CT_CHECKBOXES       7
#define CT_PROGRESS         8
#define CT_HTML             9
#define CT_STATIC_SKEW      10
#define CT_ACTIVETEXT       11
#define CT_TREE             12
#define CT_STRUCTURED_TEXT  13
#define CT_CONTEXT_MENU     14
#define CT_CONTROLS_GROUP   15
#define CT_SHORTCUTBUTTON   16
#define CT_XKEYDESC         40
#define CT_XBUTTON          41
#define CT_XLISTBOX         42
#define CT_XSLIDER          43
#define CT_XCOMBO           44
#define CT_ANIMATED_TEXTURE 45
#define CT_OBJECT           80
#define CT_OBJECT_ZOOM      81
#define CT_OBJECT_CONTAINER 82
#define CT_OBJECT_CONT_ANIM 83
#define CT_LINEBREAK        98
#define CT_USER             99
#define CT_MAP              100
#define CT_MAP_MAIN         101
#define CT_LISTNBOX         102
// Static styles
#define ST_POS            0x0F
#define ST_HPOS           0x03
#define ST_VPOS           0x0C
#define ST_LEFT           0x00
#define ST_RIGHT          0x01
#define ST_CENTER         0x02
#define ST_DOWN           0x04
#define ST_UP             0x08
#define ST_VCENTER        0x0C
#define ST_TYPE           0xF0
#define ST_SINGLE         0x00
#define ST_MULTI          0x10
#define ST_TITLE_BAR      0x20
#define ST_PICTURE        0x30
#define ST_FRAME          0x40
#define ST_BACKGROUND     0x50
#define ST_GROUP_BOX      0x60
#define ST_GROUP_BOX2     0x70
#define ST_HUD_BACKGROUND 0x80
#define ST_TILE_PICTURE   0x90
#define ST_WITH_RECT      0xA0
#define ST_LINE           0xB0
#define ST_SHADOW         0x100
#define ST_NO_RECT        0x200
#define ST_KEEP_ASPECT_RATIO  0x800
#define ST_TITLE          ST_TITLE_BAR + ST_CENTER
// Slider styles
#define SL_DIR            0x400
#define SL_VERT           0
#define SL_HORZ           0x400
#define SL_TEXTURES       0x10
// progress bar 
#define ST_VERTICAL       0x01
#define ST_HORIZONTAL     0
// Listbox styles
#define LB_TEXTURES       0x10
#define LB_MULTI          0x20
// Tree styles
#define TR_SHOWROOT       1
#define TR_AUTOCOLLAPSE   2
// MessageBox styles
#define MB_BUTTON_OK      1
#define MB_BUTTON_CANCEL  2
#define MB_BUTTON_USER    4


class RscTextTraderDialog
{
	access = 0; //DNC
	type = 0; //DNC
	idc = -1; //DNC
	colorBackground[] = {0,0,0,0}; //DNC
	colorText[] = {0.7,0,0,1}; //titleT catT, itmT, b+sT
	text = ""; //DNC
	fixedWidth = 0; //DNC
	x = 0; //DNC
	y = 0; //DNC
	h = 0.037; //DNC
	w = 0.3; //DNC
	style = 0; //DNC
	shadow = 2; //DNC
	font = "Zeppelin32"; //DNC
	SizeEx = 0.03921; //DNC
};
class RscListBoxTraderDialog
{
	access = 0; //DNC
	type = 5; //DNC
	w = 0.4; //DNC
	h = 0.4; //DNC
	rowHeight = 0;
	colorText[] = {0.6,0.6,0.6,1}; //catListT, itmListT
	colorScrollbar[] = {0.3,0.3,0.3,0.7}; // Scrollbar
	colorSelect[] = {0.3,0.3,0.3,0.8}; //Scrollbar - int
	colorSelect2[] = {0.6,0.6,0.6,1}; //Scrollbar - fade
	colorSelectBackground[] = {0.3,0.3,0.3,1};//catListT, itmListT - int
	colorSelectBackground2[] = {0.6,0.6,0.6,1};//catListT, itmListT - Fade
	colorBackground[] = {0,0,0,0}; //DNC
	soundSelect[] = {"",0.1,1}; //DNC
	arrowEmpty = "#(argb,8,8,3)color(1,1,1,1)"; //DNC
	arrowFull = "#(argb,8,8,3)color(1,1,1,1)"; //DNC
	class ScrollBar
	{
		color[] = {1,1,1,0.6};
		colorActive[] = {1,1,1,1};
		colorDisabled[] = {1,1,1,0.3};
		shadow = 0; //DNC
		thumb = "\ca\ui\data\ui_scrollbar_thumb_ca.paa"; //DNC
		arrowFull = "\ca\ui\data\ui_arrow_top_active_ca.paa"; //DNC
		arrowEmpty = "\ca\ui\data\ui_arrow_top_ca.paa"; //DNC
		border = "\ca\ui\data\ui_border_scroll_ca.paa"; //DNC
	};
	style = 16; //DNC
	font = "Zeppelin32"; //DNC
	shadow = 2; //DNC
	sizeEx = 0.03921; //DNC
	color[] = {1,1,1,1};
	period = 1.2; //DNC
	maxHistoryDelay = 1; //DNC
	autoScrollSpeed = -1; //DNC
	autoScrollDelay = 5; //DNC
	autoScrollRewind = 0; //DNC
};
class RscShortcutButtonTraderDialog
{
	type = 16; //DNC
	x = 0.1; //DNC
	y = 0.1; //DNC
	class HitZone
	{
		left = 0.004;
		top = 0.029;
		right = 0.004;
		bottom = 0.029;
	};
	class ShortcutPos
	{
		left = 0.0145;
		top = 0.026;
		w = 0.0392157;
		h = 0.0522876;
	};
	class TextPos
	{
		left = 0.05;
		top = 0.034;
		right = 0.005;
		bottom = 0.005;
	};
	shortcuts[] = {};
	textureNoShortcut = "#(argb,8,8,3)color(0,0,0,0)"; //DNC
	color[] = {0.8,0.8,0.8,1}; //CloseT, BuyT, SellT - int
	color2[] = {0.6,0.6,0.6,1}; //CloseT, BuyT, SellT - fade
	colorDisabled[] = {0,0,0,0.25}; // Disabled
	colorBackground[] = {0.3,0.3,0.3,1}; //Close, Buy, Sell - int
	colorBackground2[] = {0.6,0.6,0.6,0.95}; //Close, Buy, Sell - fade
	class Attributes
	{
		font = "Zeppelin32"; //DNC
		color = "#E5E5E5"; //DNC
		align = "left"; //DNC
		shadow = "true"; //DNC
	};
	idc = -1; //DNC
	style = 0; //DNC
	default = 0; //DNC
	shadow = 2; //DNC
	w = 0.183825;
	h = 0.104575;
	periodFocus = 1.2; //DNC
	periodOver = 0.8; //DNC
	animTextureNormal = "\ca\ui\data\ui_button_normal_ca.paa"; //DNC
	animTextureDisabled = "\ca\ui\data\ui_button_disabled_ca.paa"; //DNC
	animTextureOver = "\ca\ui\data\ui_button_over_ca.paa"; //DNC
	animTextureFocused = "\ca\ui\data\ui_button_focus_ca.paa"; //DNC
	animTexturePressed = "\ca\ui\data\ui_button_down_ca.paa"; //DNC
	animTextureDefault = "\ca\ui\data\ui_button_default_ca.paa"; //DNC
	period = 0.4; //DNC
	font = "Zeppelin32"; //DNC
	size = 0.03921; //DNC
	sizeEx = 0.03921; //DNC
	text = ""; //DNC
	soundEnter[] = {"\ca\ui\data\sound\onover",0.09,1}; //DNC
	soundPush[] = {"\ca\ui\data\sound\new1",0,0}; //DNC
	soundClick[] = {"\ca\ui\data\sound\onclick",0.07,1}; //DNC
	soundEscape[] = {"\ca\ui\data\sound\onescape",0.09,1}; //DNC
	action = ""; //DNC
	class AttributesImage
	{
		font = "Zeppelin32"; //DNC
		color = "#E5E5E5"; //DNC
		align = "left"; //DNC
	};
};

class TraderDialog
{
	idd = -1; //DNC
	movingenable = 0; //DNC

	class Controls {
		class RscTextTraderDialog_1000: RscTextTraderDialog
		{
			idc = -1; //DNC
			x = 0.283646 * safezoneW + safezoneX;
			y = 0.22492 * safezoneH + safezoneY;
			w = 0.432709 * safezoneW;
			h = 0.55016 * safezoneH;
			colorBackground[] = {0,0,0,0.75};
		};
		class RscTextTraderDialog_1001: RscTextTraderDialog
		{
			idc = -1;
			text = "DayZVJ Trader Zone";
			x = 0.283646 * safezoneW + safezoneX;
			y = 0.22492 * safezoneH + safezoneY;
			w = 0.432709 * safezoneW;
			h = 0.055016 * safezoneH;
			colorBackground[] = {0.1,0,0,0.7};
		};
		class RscListboxTraderDialog_1500: RscListboxTraderDialog
		{
			idc = 12000;
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.334952 * safezoneH + safezoneY;
			w = 0.121699 * safezoneW;
			h = 0.178802 * safezoneH;
			onMouseButtonClick = "[(lbCurSel 12000)] spawn TraderDialogLoadItemList;";
		};
		class RscTextTraderDialog_1002: RscTextTraderDialog
		{
			idc = -1;
			text = "Categories";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.29369 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.027508 * safezoneH;
		};
		class RscListboxTraderDialog_1501: RscListboxTraderDialog
		{
			idc = 12001;
			x = 0.425628 * safezoneW + safezoneX;
			y = 0.334952 * safezoneH + safezoneY;
			w = 0.283965 * safezoneW;
			h = 0.385112 * safezoneH;
			onMouseButtonClick = "[(lbCurSel 12001)] spawn TraderDialogShowPrices;";
		};
		class RscShortcutButtonTraderDialog_1700: RscShortcutButtonTraderDialog
		{
			idc = -1;
			text = "   Buy";
			x = 0.635221 * safezoneW + safezoneX;
			y = 0.720064 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.055016 * safezoneH;
			onButtonClick = "[(lbCurSel 12001)] call TraderDialogBuy; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RscShortcutButtonTraderDialog_1701: RscShortcutButtonTraderDialog
		{
			idc = -1;
			text = "   Sell";
			x = 0.540566 * safezoneW + safezoneX;
			y = 0.720064 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.055016 * safezoneH;
			onButtonClick = "[(lbCurSel 12001)] call TraderDialogSell; ((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RscTextTraderDialog_1003: RscTextTraderDialog
		{
			idc = -1;
			text = "Buy For:";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.555016 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.027508 * safezoneH;
		};
		class RscTextTraderDialog_1004: RscTextTraderDialog
		{
			idc = -1;
			text = "Sell For:";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.623786 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.027508 * safezoneH;
		};
		class RscTextTraderDialog_1005: RscTextTraderDialog
		{ //Buy
			idc = 12002;
			text = "";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.582524 * safezoneH + safezoneY;
			w = 0.114938 * safezoneW;
			h = 0.027508 * safezoneH;
			colorText[] = {0.6,0.6,0.6,1};
		};
		class RscTextTraderDialog_1006: RscTextTraderDialog
		{ //Sell
			idc = 12003;
			text = "";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.651294 * safezoneH + safezoneY;
			w = 0.114938 * safezoneW;
			h = 0.027508 * safezoneH;
			colorText[] = {0.6,0.6,0.6,1};
		};
		class RscTextTraderDialog_1008: RscTextTraderDialog
		{
			idc = -1;
			text = "Stock:";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.679910 * safezoneH + safezoneY;
			w = 0.114938 * safezoneW;
			h = 0.027508 * safezoneH;
		};
		class RscTextTraderDialog_1009: RscTextTraderDialog
		{ //Stock
			idc = 12099;
			text = "";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.699910 * safezoneH + safezoneY;
			w = 0.114938 * safezoneW;
			h = 0.027508 * safezoneH;
			colorText[] = {0.6,0.6,0.6,1};
		};
		class RscShortcutButtonTraderDialog_1702: RscShortcutButtonTraderDialog
		{
			idc = -1;
			text = "  Close";
			x = 0.290407 * safezoneW + safezoneX;
			y = 0.720064 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.055016 * safezoneH;
			onButtonClick = "((ctrlParent (_this select 0)) closeDisplay 9000);";
		};
		class RscText_1007: RscTextTraderDialog
		{
			idc = -1;
			text = "Items:-";
			x = 0.432389 * safezoneW + safezoneX;
			y = 0.29369 * safezoneH + safezoneY;
			w = 0.0743718 * safezoneW;
			h = 0.027508 * safezoneH;
		};
	};
};
