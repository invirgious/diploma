object ReportsForm: TReportsForm
  Left = 0
  Top = 0
  BorderIcons = []
  BorderStyle = bsSingle
  Caption = #1054#1090#1095#1077#1090#1099
  ClientHeight = 176
  ClientWidth = 404
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object bsSkinPageControl1: TbsSkinPageControl
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 398
    Height = 170
    ActivePage = bsSkinTabSheet1
    Align = alClient
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clBtnText
    Font.Height = 13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
    MouseWheelSupport = False
    TabExtededDraw = False
    ButtonTabSkinDataName = 'resizetoolbutton'
    TabsOffset = 0
    TabSpacing = 1
    TextInHorizontal = False
    TabsInCenter = False
    FreeOnClose = False
    ShowCloseButtons = False
    TabsBGTransparent = False
    DefaultFont.Charset = DEFAULT_CHARSET
    DefaultFont.Color = clBtnText
    DefaultFont.Height = 13
    DefaultFont.Name = 'Tahoma'
    DefaultFont.Style = []
    UseSkinFont = True
    DefaultItemHeight = 20
    SkinData = MainForm.bsSkinDataMain
    SkinDataName = 'tab'
    object bsSkinTabSheet1: TbsSkinTabSheet
      Caption = #1054#1090#1095#1077#1090' '#1087#1086' '#1087#1088#1086#1076#1072#1078#1072#1084
      ExplicitLeft = 17
      ExplicitTop = 35
      object bsSkinSpeedButton2: TbsSkinSpeedButton
        AlignWithMargins = True
        Left = 248
        Top = 80
        Width = 134
        Height = 40
        HintImageIndex = 0
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'resizebutton'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        CheckedMode = False
        ImageList = MainForm.bsPngImageList_20x20
        UseSkinSize = True
        UseSkinFontColor = True
        WidthWithCaption = 0
        WidthWithoutCaption = 0
        ImageIndex = 2
        RepeatMode = False
        RepeatInterval = 100
        Transparent = False
        Flat = False
        AllowAllUp = False
        Down = False
        GroupIndex = 0
        Caption = '  '#1055#1086#1082#1072#1079#1072#1090#1100' '#1086#1090#1095#1077#1090
        ShowCaption = True
        NumGlyphs = 1
        Spacing = 1
        OnClick = bsSkinSpeedButton2Click
      end
      object bsSkinLabel1: TbsSkinLabel
        Left = 16
        Top = 16
        Width = 73
        Height = 20
        HintImageIndex = 0
        TabOrder = 0
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'label'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        Transparent = False
        ShadowEffect = False
        ShadowColor = clBlack
        ShadowOffset = 0
        ShadowSize = 3
        ReflectionEffect = False
        ReflectionOffset = -5
        EllipsType = bsetNoneEllips
        UseSkinSize = True
        UseSkinFontColor = True
        BorderStyle = bvFrame
        Alignment = taRightJustify
        Caption = #1044#1072#1090#1072' '#1089':'
        AutoSize = False
      end
      object bsSkinLabel2: TbsSkinLabel
        Left = 222
        Top = 17
        Width = 33
        Height = 20
        HintImageIndex = 0
        TabOrder = 2
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'label'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        Transparent = False
        ShadowEffect = False
        ShadowColor = clBlack
        ShadowOffset = 0
        ShadowSize = 3
        ReflectionEffect = False
        ReflectionOffset = -5
        EllipsType = bsetNoneEllips
        UseSkinSize = True
        UseSkinFontColor = True
        BorderStyle = bvFrame
        Caption = #1087#1086':'
        AutoSize = False
      end
      object bsSkinDateEdit1: TbsSkinDateEdit
        Left = 95
        Top = 17
        Width = 121
        Height = 19
        EditMask = '!99/99/9999;1; '
        Text = '  .  .    '
        AlphaBlend = False
        AlphaBlendAnimation = False
        AlphaBlendValue = 0
        UseSkinFont = True
        TodayDefault = False
        CalendarWidth = 200
        CalendarHeight = 150
        CalendarFont.Charset = DEFAULT_CHARSET
        CalendarFont.Color = clWindowText
        CalendarFont.Height = 13
        CalendarFont.Name = 'Tahoma'
        CalendarFont.Style = []
        CalendarBoldDays = False
        CalendarUseSkinFont = True
        CalendarSkinDataName = 'panel'
        FirstDayOfWeek = Mon
        WeekNumbers = False
        ShowToday = False
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clBlack
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        ButtonMode = True
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'buttonedit'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = 13
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 10
        ParentFont = False
        TabOrder = 1
        ButtonImageIndex = -1
        LeftImageIndex = -1
        LeftImageHotIndex = -1
        LeftImageDownIndex = -1
        RightImageIndex = -1
        RightImageHotIndex = -1
        RightImageDownIndex = -1
      end
      object bsSkinDateEdit2: TbsSkinDateEdit
        Left = 261
        Top = 17
        Width = 121
        Height = 19
        EditMask = '!99/99/9999;1; '
        Text = '  .  .    '
        AlphaBlend = False
        AlphaBlendAnimation = False
        AlphaBlendValue = 0
        UseSkinFont = True
        TodayDefault = False
        CalendarWidth = 200
        CalendarHeight = 150
        CalendarFont.Charset = DEFAULT_CHARSET
        CalendarFont.Color = clWindowText
        CalendarFont.Height = 13
        CalendarFont.Name = 'Tahoma'
        CalendarFont.Style = []
        CalendarBoldDays = False
        CalendarUseSkinFont = True
        CalendarSkinDataName = 'panel'
        FirstDayOfWeek = Mon
        WeekNumbers = False
        ShowToday = False
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clBlack
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        ButtonMode = True
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'buttonedit'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clBlack
        Font.Height = 13
        Font.Name = 'Tahoma'
        Font.Style = []
        MaxLength = 10
        ParentFont = False
        TabOrder = 3
        ButtonImageIndex = -1
        LeftImageIndex = -1
        LeftImageHotIndex = -1
        LeftImageDownIndex = -1
        RightImageIndex = -1
        RightImageHotIndex = -1
        RightImageDownIndex = -1
      end
      object bsSkinComboBox1: TbsSkinComboBox
        Left = 96
        Top = 43
        Width = 286
        Height = 20
        HintImageIndex = 0
        TabOrder = 4
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'combobox'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        UseSkinSize = True
        ToolButtonStyle = False
        AlphaBlend = False
        AlphaBlendValue = 0
        AlphaBlendAnimation = False
        ListBoxCaptionMode = False
        ListBoxDefaultFont.Charset = DEFAULT_CHARSET
        ListBoxDefaultFont.Color = clWindowText
        ListBoxDefaultFont.Height = 13
        ListBoxDefaultFont.Name = 'Tahoma'
        ListBoxDefaultFont.Style = []
        ListBoxDefaultCaptionFont.Charset = DEFAULT_CHARSET
        ListBoxDefaultCaptionFont.Color = clWindowText
        ListBoxDefaultCaptionFont.Height = 13
        ListBoxDefaultCaptionFont.Name = 'Tahoma'
        ListBoxDefaultCaptionFont.Style = []
        ListBoxDefaultItemHeight = 20
        ListBoxCaptionAlignment = taLeftJustify
        ListBoxUseSkinFont = True
        ListBoxUseSkinItemHeight = True
        ListBoxWidth = 0
        HideSelection = True
        AutoComplete = True
        ImageIndex = -1
        CharCase = ecNormal
        DefaultColor = clWindow
        ItemIndex = -1
        DropDownCount = 8
        HorizontalExtent = False
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = 13
        Font.Name = 'Tahoma'
        Font.Style = []
        Sorted = False
        Style = bscbEditStyle
      end
      object bsSkinLabel3: TbsSkinLabel
        Left = 17
        Top = 42
        Width = 73
        Height = 20
        HintImageIndex = 0
        TabOrder = 5
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'label'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        Transparent = False
        ShadowEffect = False
        ShadowColor = clBlack
        ShadowOffset = 0
        ShadowSize = 3
        ReflectionEffect = False
        ReflectionOffset = -5
        EllipsType = bsetNoneEllips
        UseSkinSize = True
        UseSkinFontColor = True
        BorderStyle = bvFrame
        Alignment = taRightJustify
        Caption = #1055#1088#1086#1076#1072#1074#1077#1094':'
        AutoSize = False
      end
    end
    object bsSkinTabSheet2: TbsSkinTabSheet
      Caption = #1054#1090#1095#1077#1090' '#1087#1086' '#1082#1083#1080#1077#1085#1090#1072#1084
      object bsSkinSpeedButton1: TbsSkinSpeedButton
        AlignWithMargins = True
        Left = 248
        Top = 80
        Width = 137
        Height = 40
        HintImageIndex = 0
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'resizebutton'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        CheckedMode = False
        ImageList = MainForm.bsPngImageList_20x20
        UseSkinSize = True
        UseSkinFontColor = True
        WidthWithCaption = 0
        WidthWithoutCaption = 0
        ImageIndex = 2
        RepeatMode = False
        RepeatInterval = 100
        Transparent = False
        Flat = False
        AllowAllUp = False
        Down = False
        GroupIndex = 0
        Caption = #1055#1086#1082#1072#1079#1072#1090#1100' '#1086#1090#1095#1077#1090
        ShowCaption = True
        NumGlyphs = 1
        Spacing = 1
        OnClick = bsSkinSpeedButton1Click
      end
      object bsSkinRadioGroup1: TbsSkinRadioGroup
        Left = 3
        Top = 3
        Width = 390
        Height = 57
        HintImageIndex = 0
        TabOrder = 0
        SkinData = MainForm.bsSkinDataMain
        SkinDataName = 'groupbox'
        DefaultFont.Charset = DEFAULT_CHARSET
        DefaultFont.Color = clWindowText
        DefaultFont.Height = 13
        DefaultFont.Name = 'Tahoma'
        DefaultFont.Style = []
        DefaultWidth = 0
        DefaultHeight = 0
        UseSkinFont = True
        EmptyDrawing = False
        RibbonStyle = False
        ImagePosition = bsipDefault
        TransparentMode = False
        CaptionImageIndex = -1
        RealHeight = -1
        AutoEnabledControls = True
        CheckedMode = False
        Checked = False
        DefaultAlignment = taLeftJustify
        DefaultCaptionHeight = 20
        BorderStyle = bvFrame
        CaptionMode = True
        RollUpMode = False
        RollUpState = False
        NumGlyphs = 1
        Spacing = 2
        Caption = #1055#1086#1083':'
        UseSkinSize = True
        ButtonSkinDataName = 'radiobox'
        ButtonDefaultFont.Charset = DEFAULT_CHARSET
        ButtonDefaultFont.Color = clWindowText
        ButtonDefaultFont.Height = 13
        ButtonDefaultFont.Name = 'Tahoma'
        ButtonDefaultFont.Style = []
        Columns = 3
        ItemIndex = 0
        Items.Strings = (
          #1042#1089#1077
          #1052#1091#1078#1095#1080#1085#1099
          #1046#1077#1085#1097#1080#1085#1099)
      end
    end
  end
  object frxReport1: TfrxReport
    Version = '6.1.10'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44708.820228969890000000
    ReportOptions.LastChange = 44708.820228969890000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 288
    Top = 56
    Datasets = <
      item
        DataSet = frxDBDatasetSellReport
        DataSetName = 'frxDBDatasetSellReport'
      end
      item
        DataSet = frxDBDatasetSubSellRep
        DataSetName = 'frxDBDatasetSubSellRep'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      object Header1: TfrxHeader
        FillType = ftBrush
        Frame.Typ = []
        Height = 22.677180000000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo7: TfrxMemoView
          AllowVectorExport = True
          Width = 718.110700000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            #1054#1090#1095#1077#1090' '#1087#1086' '#1087#1088#1086#1076#1072#1078#1072#1084)
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Frame.Typ = []
        Height = 56.692950000000000000
        Top = 64.252010000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDatasetSellReport
        DataSetName = 'frxDBDatasetSellReport'
        RowCount = 0
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Top = 37.795300000000000000
          Width = 302.362400000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            
              '[frxDBDatasetSellReport."_LAST_NAME"] [frxDBDatasetSellReport."_' +
              'FIRST_NAME"] [frxDBDatasetSellReport."_MIDDLE_NAME"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo2: TfrxMemoView
          AllowVectorExport = True
          Left = 302.362400000000000000
          Top = 37.795300000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSellReport."_DATE"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          AllowVectorExport = True
          Left = 604.724800000000000000
          Top = 37.795300000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DisplayFormat.FormatStr = '%2.2m'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSellReport."_FULL_SUM"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo4: TfrxMemoView
          AllowVectorExport = True
          Top = 18.897650000000000000
          Width = 302.362400000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            #1060#1048#1054)
          ParentFont = False
          VAlign = vaCenter
          Formats = <
            item
            end
            item
            end
            item
            end>
        end
        object Memo5: TfrxMemoView
          AllowVectorExport = True
          Left = 302.362400000000000000
          Top = 18.897650000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            #1044#1072#1090#1072)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo6: TfrxMemoView
          AllowVectorExport = True
          Left = 604.724800000000000000
          Top = 18.897650000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DisplayFormat.FormatStr = '%2.2m'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            #1057#1091#1084#1084#1072)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo10: TfrxMemoView
          AllowVectorExport = True
          Left = 415.748300000000000000
          Top = 37.795300000000000000
          Width = 188.976500000000000000
          Height = 18.897650000000000000
          DataField = '_USER_ID'
          DataSet = frxDBDatasetSellReport
          DataSetName = 'frxDBDatasetSellReport'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSellReport."_USER_ID"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo11: TfrxMemoView
          AllowVectorExport = True
          Left = 415.748300000000000000
          Top = 18.897650000000000000
          Width = 188.976500000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            #1055#1088#1086#1076#1072#1074#1077#1094)
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object DetailData1: TfrxDetailData
        FillType = ftBrush
        Frame.Typ = []
        Height = 18.897650000000000000
        Top = 143.622140000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDatasetSubSellRep
        DataSetName = 'frxDBDatasetSubSellRep'
        RowCount = 0
        object frxDBDatasetSubSellRep_TITLE: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Width = 302.362400000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDatasetSubSellRep
          DataSetName = 'frxDBDatasetSubSellRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSubSellRep."_TITLE"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetSubSellRep_COUNT: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 445.984540000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = '_COUNT'
          DataSet = frxDBDatasetSubSellRep
          DataSetName = 'frxDBDatasetSubSellRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSubSellRep."_COUNT"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetSubSellRep_PRICE: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 525.354670000000000000
          Width = 79.370130000000000000
          Height = 18.897650000000000000
          DataField = '_PRICE'
          DataSet = frxDBDatasetSubSellRep
          DataSetName = 'frxDBDatasetSubSellRep'
          DisplayFormat.FormatStr = '%2.2m'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSubSellRep."_PRICE"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetSubSellRep_SUM: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 604.724800000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DataSet = frxDBDatasetSubSellRep
          DataSetName = 'frxDBDatasetSubSellRep'
          DisplayFormat.FormatStr = '%2.2m'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSubSellRep."SHOW_SUM"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetSubSellRep_TYPE: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 302.362400000000000000
          Width = 143.622140000000000000
          Height = 18.897650000000000000
          DataField = '_TYPE'
          DataSet = frxDBDatasetSubSellRep
          DataSetName = 'frxDBDatasetSubSellRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetSubSellRep."_TYPE"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object ReportSummary1: TfrxReportSummary
        FillType = ftBrush
        Frame.Typ = []
        Height = 22.677180000000000000
        Top = 222.992270000000000000
        Width = 718.110700000000000000
        object Memo8: TfrxMemoView
          AllowVectorExport = True
          Width = 604.724800000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          Memo.UTF8W = (
            #1048#1090#1086#1075#1086':')
          ParentFont = False
          VAlign = vaCenter
          Formats = <
            item
            end
            item
            end
            item
            end>
        end
        object Memo9: TfrxMemoView
          AllowVectorExport = True
          Left = 604.724800000000000000
          Width = 113.385900000000000000
          Height = 18.897650000000000000
          DisplayFormat.FormatStr = '%2.2m'
          DisplayFormat.Kind = fkNumeric
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          Fill.BackColor = clMenu
          HAlign = haCenter
          Memo.UTF8W = (
            '[SUM(<frxDBDatasetSellReport."_FULL_SUM">,MasterData1)]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
    end
  end
  object frxReport2: TfrxReport
    Version = '6.1.10'
    DotMatrixReport = False
    IniFile = '\Software\Fast Reports'
    PreviewOptions.Buttons = [pbPrint, pbLoad, pbSave, pbExport, pbZoom, pbFind, pbOutline, pbPageSetup, pbTools, pbEdit, pbNavigator, pbExportQuick, pbCopy, pbSelection]
    PreviewOptions.Zoom = 1.000000000000000000
    PrintOptions.Printer = #1055#1086' '#1091#1084#1086#1083#1095#1072#1085#1080#1102
    PrintOptions.PrintOnSheet = 0
    ReportOptions.CreateDate = 44708.820228969900000000
    ReportOptions.LastChange = 44708.820228969900000000
    ScriptLanguage = 'PascalScript'
    ScriptText.Strings = (
      'begin'
      ''
      'end.')
    Left = 336
    Top = 56
    Datasets = <
      item
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDatasetClientsRep'
      end>
    Variables = <>
    Style = <>
    object Data: TfrxDataPage
      Height = 1000.000000000000000000
      Width = 1000.000000000000000000
    end
    object Page1: TfrxReportPage
      PaperWidth = 210.000000000000000000
      PaperHeight = 297.000000000000000000
      PaperSize = 9
      LeftMargin = 10.000000000000000000
      RightMargin = 10.000000000000000000
      TopMargin = 10.000000000000000000
      BottomMargin = 10.000000000000000000
      Frame.Typ = []
      object Header1: TfrxHeader
        FillType = ftBrush
        Frame.Typ = []
        Height = 75.590575590000000000
        Top = 18.897650000000000000
        Width = 718.110700000000000000
        object Memo1: TfrxMemoView
          AllowVectorExport = True
          Width = 718.110700000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -16
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = []
          HAlign = haCenter
          Memo.UTF8W = (
            #1054#1090#1095#1077#1090' '#1087#1086' '#1082#1083#1080#1077#1085#1090#1072#1084)
          ParentFont = False
        end
        object Memo2: TfrxMemoView
          AllowVectorExport = True
          Left = 86.929190000000000000
          Top = 37.795300000000000000
          Width = 219.212740000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1060#1048#1054)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo3: TfrxMemoView
          AllowVectorExport = True
          Left = 306.141930000000000000
          Top = 37.795300000000000000
          Width = 75.590600000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1055#1086#1083)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo4: TfrxMemoView
          AllowVectorExport = True
          Left = 381.732530000000000000
          Top = 37.795300000000000000
          Width = 94.488250000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo5: TfrxMemoView
          AllowVectorExport = True
          Top = 37.795300000000000000
          Width = 86.929190000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #8470' '#1082#1083#1091#1073#1085#1086#1081' '#1082#1072#1088#1090#1099)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo6: TfrxMemoView
          AllowVectorExport = True
          Left = 597.165740000000000000
          Top = 37.795300000000000000
          Width = 120.944960000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1058#1077#1083#1077#1092#1086#1085)
          ParentFont = False
          VAlign = vaCenter
        end
        object Memo7: TfrxMemoView
          AllowVectorExport = True
          Left = 476.220780000000000000
          Top = 37.795300000000000000
          Width = 120.944960000000000000
          Height = 37.795275590000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -13
          Font.Name = 'times New Roman'
          Font.Style = [fsBold]
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            #1069#1083#1077#1082#1090#1088#1086#1085#1085#1072#1103' '#1087#1086#1095#1090#1072)
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object MasterData1: TfrxMasterData
        FillType = ftBrush
        Frame.Typ = []
        Height = 18.897650000000000000
        Top = 117.165430000000000000
        Width = 718.110700000000000000
        DataSet = frxDBDataset1
        DataSetName = 'frxDBDatasetClientsRep'
        RowCount = 0
        object Memo8: TfrxMemoView
          AllowVectorExport = True
          Left = 86.929190000000000000
          Width = 219.212740000000000000
          Height = 18.897650000000000000
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            
              '[frxDBDatasetClientsRep."_LAST_NAME"] [frxDBDatasetClientsRep."_' +
              'FIRST_NAME"] [frxDBDatasetClientsRep."_MIDDLE_NAME"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetClientsRep_CLUB_CARD_NUM: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Width = 86.929190000000000000
          Height = 18.897650000000000000
          DataField = '_CLUB_CARD_NUM'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDatasetClientsRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetClientsRep."_CLUB_CARD_NUM"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetClientsRep_GENDER: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 306.141930000000000000
          Width = 75.590600000000000000
          Height = 18.897650000000000000
          DataField = '_GENDER'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDatasetClientsRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetClientsRep."_GENDER"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetClientsRep_BIRTHDAY: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 381.732530000000000000
          Width = 94.488250000000000000
          Height = 18.897650000000000000
          DataField = '_BIRTHDAY'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDatasetClientsRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetClientsRep."_BIRTHDAY"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetClientsRep_EMAIL: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 476.220780000000000000
          Width = 120.944960000000000000
          Height = 18.897650000000000000
          DataField = '_EMAIL'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDatasetClientsRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetClientsRep."_EMAIL"]')
          ParentFont = False
          VAlign = vaCenter
        end
        object frxDBDatasetClientsRep_PHONE: TfrxMemoView
          IndexTag = 1
          AllowVectorExport = True
          Left = 597.165740000000000000
          Width = 120.944960000000000000
          Height = 18.897650000000000000
          DataField = '_PHONE'
          DataSet = frxDBDataset1
          DataSetName = 'frxDBDatasetClientsRep'
          Font.Charset = DEFAULT_CHARSET
          Font.Color = clBlack
          Font.Height = -11
          Font.Name = 'times New Roman'
          Font.Style = []
          Frame.Typ = [ftLeft, ftRight, ftTop, ftBottom]
          HAlign = haCenter
          Memo.UTF8W = (
            '[frxDBDatasetClientsRep."_PHONE"]')
          ParentFont = False
          VAlign = vaCenter
        end
      end
      object Footer1: TfrxFooter
        FillType = ftBrush
        Frame.Typ = []
        Height = 22.677180000000000000
        Top = 158.740260000000000000
        Width = 718.110700000000000000
      end
    end
  end
  object UniQuerySellReport: TUniQuery
    Connection = MainForm.UniConnectionMain
    SQL.Strings = (
      'SELECT'
      '  clients._FIRST_NAME,'
      '  clients._LAST_NAME,'
      '  clients._MIDDLE_NAME,'
      '  sells._DATE,'
      '  clients._CLUB_CARD_NUM,'
      '  sells._FULL_SUM,'
      '  sells._CLIENT_ID,'
      '  sells._ID,'
      'sells._USER_ID'
      'FROM sells'
      '  INNER JOIN clients'
      '    ON sells._CLIENT_ID = clients._ID')
    AfterScroll = UniQuerySellReportAfterScroll
    Left = 184
    Top = 88
  end
  object UniQuerySubSellRep: TUniQuery
    Connection = MainForm.UniConnectionMain
    SQL.Strings = (
      'SELECT'
      '  sells_items._ID,'
      '  sells_items._SELL_ID,'
      '  sells_items._PROD_SERV_ID,'
      '  sells_items._COUNT,'
      '  sells_items._SUM,'
      '  prods_servs._TITLE,'
      '  prods_servs._PRICE,'
      '  prods_servs._TYPE'
      'FROM sells_items'
      '  INNER JOIN prods_servs'
      '    ON sells_items._PROD_SERV_ID = prods_servs._ID')
    OnCalcFields = UniQuerySubSellRepCalcFields
    Left = 184
    Top = 136
    object UniQuerySubSellRep_ID: TStringField
      FieldName = '_ID'
      Size = 255
    end
    object UniQuerySubSellRep_SELL_ID: TStringField
      FieldName = '_SELL_ID'
      Size = 255
    end
    object UniQuerySubSellRep_PROD_SERV_ID: TStringField
      FieldName = '_PROD_SERV_ID'
      Size = 255
    end
    object UniQuerySubSellRep_COUNT: TIntegerField
      FieldName = '_COUNT'
    end
    object UniQuerySubSellRep_SUM: TFloatField
      FieldName = '_SUM'
    end
    object UniQuerySubSellRep_TITLE: TStringField
      FieldName = '_TITLE'
      ReadOnly = True
      Size = 255
    end
    object UniQuerySubSellRep_PRICE: TFloatField
      FieldName = '_PRICE'
      ReadOnly = True
    end
    object UniQuerySubSellRep_TYPE: TStringField
      FieldName = '_TYPE'
      ReadOnly = True
      Size = 255
    end
    object UniQuerySubSellRepSHOW_SUM: TFloatField
      FieldKind = fkCalculated
      FieldName = 'SHOW_SUM'
      Calculated = True
    end
  end
  object frxDBDatasetSubSellRep: TfrxDBDataset
    UserName = 'frxDBDatasetSubSellRep'
    CloseDataSource = False
    DataSet = UniQuerySubSellRep
    BCDToCurrency = False
    Left = 100
    Top = 102
  end
  object frxDBDatasetSellReport: TfrxDBDataset
    UserName = 'frxDBDatasetSellReport'
    CloseDataSource = False
    DataSet = UniQuerySellReport
    BCDToCurrency = False
    Left = 44
    Top = 126
  end
  object UniTableClientsRep: TUniTable
    TableName = 'clients'
    Connection = MainForm.UniConnectionMain
    Active = True
    Left = 196
    Top = 30
  end
  object bsBusinessSkinForm1: TbsBusinessSkinForm
    UseRibbon = False
    ShowMDIScrollBars = True
    WindowState = wsNormal
    QuickButtons = <>
    QuickButtonsShowHint = False
    QuickButtonsShowDivider = True
    ClientInActiveEffect = False
    ClientInActiveEffectType = bsieSemiTransparent
    DisableSystemMenu = False
    AlwaysResize = False
    PositionInMonitor = bspDefault
    UseFormCursorInNCArea = False
    MaxMenuItemsInWindow = 0
    ClientWidth = 0
    ClientHeight = 0
    HideCaptionButtons = False
    HideCloseButton = False
    AlwaysShowInTray = False
    LogoBitMapTransparent = False
    AlwaysMinimizeToTray = False
    UseSkinFontInMenu = True
    UseSkinFontInCaption = True
    UseSkinSizeInMenu = True
    ShowIcon = False
    MaximizeOnFullScreen = False
    AlphaBlend = False
    AlphaBlendAnimation = False
    AlphaBlendValue = 200
    ShowObjectHint = False
    MenusAlphaBlend = False
    MenusAlphaBlendAnimation = False
    MenusAlphaBlendValue = 200
    DefCaptionFont.Charset = DEFAULT_CHARSET
    DefCaptionFont.Color = clBtnText
    DefCaptionFont.Height = 13
    DefCaptionFont.Name = 'Tahoma'
    DefCaptionFont.Style = [fsBold]
    DefInActiveCaptionFont.Charset = DEFAULT_CHARSET
    DefInActiveCaptionFont.Color = clBtnShadow
    DefInActiveCaptionFont.Height = 13
    DefInActiveCaptionFont.Name = 'Tahoma'
    DefInActiveCaptionFont.Style = [fsBold]
    DefMenuItemHeight = 20
    DefMenuItemFont.Charset = DEFAULT_CHARSET
    DefMenuItemFont.Color = clWindowText
    DefMenuItemFont.Height = 13
    DefMenuItemFont.Name = 'Tahoma'
    DefMenuItemFont.Style = []
    UseDefaultSysMenu = True
    SkinData = MainForm.bsSkinDataMain
    MinimizeApplication = False
    MenusSkinData = MainForm.bsSkinDataMain
    MinHeight = 0
    MinWidth = 0
    MaxHeight = 0
    MaxWidth = 0
    MinClientHeight = 0
    MinClientWidth = 0
    MaxClientHeight = 0
    MaxClientWidth = 0
    Magnetic = False
    MagneticSize = 5
    BorderIcons = [biSystemMenu, biMinimize, biMaximize]
    Left = 80
    Top = 48
  end
  object frxDBDataset1: TfrxDBDataset
    UserName = 'frxDBDatasetClientsRep'
    CloseDataSource = False
    DataSet = UniTableClientsRep
    BCDToCurrency = False
    Left = 284
    Top = 65534
  end
  object UniQueryEx: TUniQuery
    Connection = MainForm.UniConnectionMain
    Left = 36
    Top = 94
  end
end
