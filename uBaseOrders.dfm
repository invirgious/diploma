object BaseOrdersForm: TBaseOrdersForm
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = #1055#1088#1086#1076#1072#1078#1080
  ClientHeight = 583
  ClientWidth = 1086
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
  object DBGridEh_orders: TDBGridEh
    AlignWithMargins = True
    Left = 3
    Top = 63
    Width = 1080
    Height = 517
    Align = alClient
    AllowedOperations = []
    DataSource = UniDataSource_Orders
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
    SearchPanel.Enabled = True
    SearchPanel.FilterOnTyping = True
    SelectionDrawParams.DrawFocusFrame = True
    SelectionDrawParams.DrawFocusFrameStored = True
    STFilter.Local = True
    STFilter.Location = stflInTitleFilterEh
    TabOrder = 1
    TitleParams.Color = 12500670
    TitleParams.FillStyle = cfstThemedEh
    TitleParams.MultiTitle = True
    TitleParams.SecondColor = 14145495
    OnTitleBtnClick = DBGridEh_ordersTitleBtnClick
    Columns = <
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_CLUB_CARD_NUM'
        Footers = <>
        Title.Caption = #8470' '#1082#1083#1091#1073#1085#1086#1081' '#1082#1072#1088#1090#1099
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 125
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_FIRST_NAME'
        Footers = <>
        Title.Caption = #1048#1084#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 200
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_LAST_NAME'
        Footers = <>
        Title.Caption = #1060#1072#1084#1080#1083#1080#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 177
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_MIDDLE_NAME'
        Footers = <>
        Title.Caption = #1054#1090#1095#1077#1089#1090#1074#1086
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 183
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_DATE'
        Footers = <>
        Title.Caption = #1044#1072#1090#1072' '#1087#1088#1086#1076#1072#1078#1080
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 128
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_FULL_SUM'
        Footers = <>
        Title.Caption = #1057#1090#1086#1080#1084#1086#1089#1090#1100
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 100
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_USER_ID'
        Footers = <>
        Title.Caption = #1055#1088#1086#1076#1072#1074#1077#1094
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 117
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object bsSkinPanel1: TbsSkinPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 1080
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
    ExplicitWidth = 983
    object bsSkinSpeedButton2: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 161
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
      Caption = '  '#1053#1086#1074#1072#1103' '#1087#1088#1086#1076#1072#1078#1072
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton2Click
      ExplicitLeft = 8
      ExplicitTop = 12
      ExplicitHeight = 33
    end
    object bsSkinSpeedButton3: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 171
      Top = 4
      Width = 142
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
      ImageIndex = 6
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1087#1088#1086#1076#1072#1078#1091
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton3Click
    end
    object bsSkinSpeedButton4: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 319
      Top = 4
      Width = 154
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
      ImageIndex = 3
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = ' '#1059#1076#1072#1083#1080#1090#1100' '#1087#1088#1086#1076#1072#1078#1091
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton4Click
    end
    object bsSkinSpeedButton5: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 479
      Top = 4
      Width = 154
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
      ImageIndex = 7
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1069#1082#1089#1087#1086#1088#1090' '#1074' Excel'
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton5Click
    end
    object bsSkinSpeedButton1: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 639
      Top = 4
      Width = 138
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
      ImageIndex = 4
      RepeatMode = False
      RepeatInterval = 100
      Transparent = False
      Flat = False
      AllowAllUp = False
      Down = False
      GroupIndex = 0
      Caption = '  '#1054#1073#1085#1086#1074#1080#1090#1100
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton1Click
    end
  end
  object UniDataSource_Orders: TUniDataSource
    DataSet = UniTable_Orders
    Left = 687
    Top = 419
  end
  object UniQueryEx: TUniQuery
    Connection = MainForm.UniConnectionMain
    Left = 683
    Top = 311
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
    Left = 112
    Top = 152
  end
  object FormSize1: TFormSize
    Location = plRegistry
    MagnetDistance = 32
    SaveUser = True
    SaveMachine = False
    SaveName = '.\FORM.INI'
    SaveKey = 'BaseOrdersForm'
    Version = '1.3.1.5'
    Left = 536
    Top = 288
  end
  object UniTable_Orders: TUniQuery
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
    Left = 688
    Top = 368
  end
end
