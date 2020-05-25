class ENH_IntroText: Title
{
	attributeLoad = "[_this,_value] call ENH_fnc_introText_onAttributeLoad";
	attributeSave = "_this call ENH_fnc_introText_onAttributeSave";
	h = 14.5 * SIZE_M * GRID_H + 40 * pixelH;
	class Controls: Controls
	{
		ATTRIBUTE_DESCRIPTION($STR_ENH_INTROTEXT_DESCRIPTION,3);
		class DelayTitle: Title
		{
			text = $STR_ENH_INTROTEXT_INTRODELAY_DISPLAYNAME;
			tooltip = $STR_ENH_INTROTEXT_INTRODELAY_TOOLTIP;
			y = 4.5 * SIZE_M * GRID_H + 5 * pixelH;
		};
		class DelayValue: ctrlXSliderH
		{
			idc = 100;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			y = 4.5 * SIZE_M * GRID_H + 5 * pixelH;
			w = (ATTRIBUTE_CONTENT_W - EDIT_W_WIDE) * GRID_W;
			h = SIZE_M * GRID_H;
		 	sliderPosition = 0;
			sliderRange[] = {0,360};
			sliderStep = 1;
			lineSize = 1;
		};
		class DelayEdit: ctrlEdit
		{
			idc = 101;
			x = (ATTRIBUTE_TITLE_W + ATTRIBUTE_CONTENT_W - EDIT_W_WIDE) * GRID_W;
			y = 4.5 * SIZE_M * GRID_H + 5 * pixelH;
			w = EDIT_W_WIDE * GRID_W;
			h = SIZE_M * GRID_H;
		};
		class Line1Title: DelayTitle
		{
			y = 5.5 * SIZE_M * GRID_H + 10 * pixelH;
			text = $STR_ENH_INTROTEXT_LINE1_DISPLAYNAME;
			tooltip = "";
		};
		class Line1Value: ctrlEdit
		{
			idc = 102;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			y = 5.5 * SIZE_M * GRID_H + 10 * pixelH;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = SIZE_M * GRID_H;
		};
		class Line2Title: DelayTitle
		{
			y = 6.5 * SIZE_M * GRID_H + 15 * pixelH;
			text = $STR_ENH_INTROTEXT_LINE2_DISPLAYNAME;
			tooltip = "";
		};
		class Line2Value: Line1Value
		{
			idc = 103;
			y = 6.5 * SIZE_M * GRID_H + 15 * pixelH;
		};
		class Line3Title: DelayTitle
		{
			y = 7.5 * SIZE_M * GRID_H + 20 * pixelH;
			text = $STR_ENH_INTROTEXT_LINE3_DISPLAYNAME;
			tooltip = "";
		};
		class Line3Value: Line1Value
		{
			idc = 104;
			y = 7.5 * SIZE_M * GRID_H + 20 * pixelH;
		};
		class IntroTypeTitle: DelayTitle
		{
			y = 8.5 * SIZE_M * GRID_H + 25 * pixelH;
			text = $STR_ENH_INTROTEXT_INTROTYPE_DISPLAYNAME;
			tooltip = "";
		};
		class IntroType: ctrlToolboxPictureKeepAspect
        {
            idc = 105;
			x = ATTRIBUTE_TITLE_W * GRID_W;
			y = 8.5 * SIZE_M * GRID_H + 30 * pixelH;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = 5 * SIZE_M * GRID_H;
            rows = 1;
            columns = 3;
            strings[] =
            {
				QPATHTOF(ENH\data\BIS_fnc_textTiles_preview.paa),
				QPATHTOF(ENH\data\BIS_fnc_infoText_preview.paa),
				QPATHTOF(ENH\data\BIS_fnc_EXP_camp_SITREP_preview.paa)
            };
            values[] = {0,1,2};
        };
		class Reset: ctrlButton
		{
			x = ATTRIBUTE_TITLE_W * GRID_W;
			y = 13.5 * SIZE_M * GRID_H + 35 * pixelH;
			w = ATTRIBUTE_CONTENT_W * GRID_W;
			h = SIZE_M * GRID_H;
			onButtonDown  = "_this call ENH_fnc_introText_onButtonDown";
			text = $STR_ENH_RESETANDDISABLE;
		};
	};
};
