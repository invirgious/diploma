object BaseProdsServsForm: TBaseProdsServsForm
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = #1058#1086#1074#1072#1088#1099' '#1080' '#1091#1089#1083#1091#1075#1080
  ClientHeight = 657
  ClientWidth = 1077
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Scaled = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object DBGridEh: TDBGridEh
    AlignWithMargins = True
    Left = 3
    Top = 114
    Width = 1071
    Height = 540
    Align = alClient
    AllowedOperations = []
    DataSource = UniDataSource_Products
    DrawGraphicData = True
    DrawMemoText = True
    DynProps = <>
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    IndicatorOptions = [gioShowRowIndicatorEh, gioShowRecNoEh]
    OddRowColor = clBtnFace
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghDialogFind, dghShowRecNo, dghColumnResize, dghColumnMove, dghExtendVertLines]
    ParentFont = False
    ReadOnly = True
    RowPanel.Active = True
    SearchPanel.Enabled = True
    SearchPanel.FilterOnTyping = True
    SelectionDrawParams.DrawFocusFrame = True
    SelectionDrawParams.DrawFocusFrameStored = True
    STFilter.Local = True
    STFilter.Location = stflInTitleFilterEh
    TabOrder = 2
    TitleParams.Color = 12500670
    TitleParams.FillStyle = cfstThemedEh
    TitleParams.MultiTitle = True
    TitleParams.SecondColor = 14145495
    OnTitleBtnClick = DBGridEhTitleBtnClick
    Columns = <
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_TITLE'
        Footers = <>
        Title.Caption = #1053#1072#1080#1084#1077#1085#1086#1074#1072#1085#1080#1077
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 314
        InRowLineHeight = 3
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_PRICE'
        Footers = <>
        Title.Caption = #1062#1077#1085#1072
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 125
        InRowLineHeight = 3
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_TYPE'
        Footers = <>
        Title.Caption = #1050#1072#1090#1077#1075#1086#1088#1080#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 160
        InRowLineHeight = 3
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_PREVIEW'
        Footers = <>
        Title.Caption = #1060#1086#1090#1086
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Width = 136
        InRowLineHeight = 3
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object bsSkinPanel1: TbsSkinPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 1071
    Height = 54
    HintImageIndex = 0
    TabOrder = 0
    SkinData = MainForm.bsSkinDataMain
    SkinDataName = 'panel'
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
    CaptionMode = False
    RollUpMode = False
    RollUpState = False
    NumGlyphs = 1
    Spacing = 2
    Caption = 'bsSkinPanel1'
    Align = alTop
    object bsSkinSpeedButton2: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 141
      Height = 46
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
      ImageIndex = 5
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1086#1074#1099#1081' '#1090#1086#1074#1072#1088'/'#1091#1089#1083#1091#1075#1091
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton2Click
    end
    object bsSkinSpeedButton3: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 148
      Top = 4
      Width = 133
      Height = 46
      Margins.Left = 0
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
      ImageIndex = 6
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1090#1086#1074#1072#1088'/'#1091#1089#1083#1091#1075#1091
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton3Click
    end
    object bsSkinSpeedButton4: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 284
      Top = 4
      Width = 149
      Height = 46
      Margins.Left = 0
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
      ImageIndex = 3
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1090#1086#1074#1072#1088'/'#1091#1089#1083#1091#1075#1091
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton4Click
    end
    object bsSkinSpeedButton5: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 436
      Top = 4
      Width = 161
      Height = 46
      Margins.Left = 0
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
      ImageIndex = 7
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '   '#1069#1082#1089#1087#1086#1088#1090' '#1074' Excel'
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton5Click
      ExplicitLeft = 510
      ExplicitTop = 12
      ExplicitHeight = 33
    end
    object bsSkinSpeedButton1: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 600
      Top = 4
      Width = 161
      Height = 46
      Margins.Left = 0
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
      ImageIndex = 4
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '   '#1054#1073#1085#1086#1074#1080#1090#1100
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton1Click
      ExplicitLeft = 678
      ExplicitTop = 12
      ExplicitHeight = 33
    end
  end
  object bsSkinPanel2: TbsSkinPanel
    AlignWithMargins = True
    Left = 3
    Top = 63
    Width = 1071
    Height = 45
    HintImageIndex = 0
    TabOrder = 1
    SkinData = MainForm.bsSkinDataMain
    SkinDataName = 'panel'
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
    CaptionMode = False
    RollUpMode = False
    RollUpState = False
    NumGlyphs = 1
    Spacing = 2
    Caption = 'bsSkinPanel1'
    Align = alTop
    object bsSkinSpeedButton6: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 493
      Top = 6
      Width = 148
      Height = 30
      Margins.Left = 0
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
      Caption = '  '#1055#1088#1080#1084#1077#1085#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
      ShowCaption = True
      NumGlyphs = 1
      Spacing = 1
      OnClick = bsSkinSpeedButton6Click
    end
    object bsSkinSpeedButton7: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 646
      Top = 6
      Width = 138
      Height = 30
      Margins.Left = 0
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
      ImageIndex = 0
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1057#1073#1088#1086#1089#1080#1090#1100' '#1092#1080#1083#1100#1090#1088
      ShowCaption = True
      NumGlyphs = 1
      Spacing = 1
      OnClick = bsSkinSpeedButton7Click
    end
    object bsSkinLabel1: TbsSkinLabel
      Left = 3
      Top = 11
      Width = 142
      Height = 21
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
      Caption = #1060#1080#1083#1100#1090#1088' '#1087#1086' '#1082#1072#1090#1077#1075#1086#1088#1080#1103#1084':'
      AutoSize = False
    end
    object bsSkinComboBox1: TbsSkinComboBox
      Left = 151
      Top = 11
      Width = 330
      Height = 20
      HintImageIndex = 0
      TabOrder = 1
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
  end
  object UniTable_Products: TUniTable
    TableName = 'prods_servs'
    Connection = MainForm.UniConnectionMain
    Left = 682
    Top = 355
    object UniTable_Products_ID: TStringField
      FieldName = '_ID'
      Required = True
      Size = 255
    end
    object UniTable_Products_TITLE: TStringField
      FieldName = '_TITLE'
      Size = 255
    end
    object UniTable_Products_PRICE: TFloatField
      FieldName = '_PRICE'
    end
    object UniTable_Products_NOTE: TMemoField
      FieldName = '_NOTE'
      BlobType = ftMemo
    end
    object UniTable_Products_TYPE: TStringField
      FieldName = '_TYPE'
      Size = 255
    end
    object UniTable_Products_BARCODE: TStringField
      FieldName = '_BARCODE'
      Size = 255
    end
    object UniTable_Products_PREVIEW: TBlobField
      FieldName = '_PREVIEW'
      BlobType = ftGraphic
    end
  end
  object UniDataSource_Products: TUniDataSource
    DataSet = UniTable_Products
    Left = 682
    Top = 411
  end
  object UniQueryEx: TUniQuery
    Connection = MainForm.UniConnectionMain
    Left = 683
    Top = 287
  end
  object UniQueryDEL: TUniQuery
    Connection = MainForm.UniConnectionMain
    Left = 843
    Top = 327
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
    Left = 304
    Top = 336
  end
  object FormSize1: TFormSize
    Location = plRegistry
    MagnetDistance = 32
    SaveUser = True
    SaveMachine = False
    SaveName = '.\FORM.INI'
    SaveKey = 'BaseProductsForm'
    Version = '1.3.1.5'
    Left = 536
    Top = 288
  end
end
