object BaseUsersForm: TBaseUsersForm
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = #1055#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1080
  ClientHeight = 653
  ClientWidth = 1031
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
  object DBGridEh_users: TDBGridEh
    AlignWithMargins = True
    Left = 3
    Top = 63
    Width = 1025
    Height = 587
    Align = alClient
    AllowedOperations = []
    DataSource = UniDataSource_Users
    DrawMemoText = True
    DynProps = <>
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    IndicatorOptions = [gioShowRowIndicatorEh, gioShowRecNoEh]
    OddRowColor = clBtnFace
    OptionsEh = [dghFixed3D, dghHighlightFocus, dghClearSelection, dghAutoSortMarking, dghMultiSortMarking, dghRowHighlight, dghDialogFind, dghShowRecNo, dghColumnResize, dghColumnMove, dghExtendVertLines]
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
    OnDblClick = bsSkinSpeedButton3Click
    OnTitleBtnClick = DBGridEh_usersTitleBtnClick
    Columns = <
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_TAB_NUM'
        Footers = <>
        Title.Caption = #1058#1072#1073'. '#1085#1086#1084#1077#1088
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
        FieldName = '_LAST_NAME'
        Footers = <>
        Title.Caption = #1060#1072#1084#1080#1083#1080#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 170
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_NAME'
        Footers = <>
        Title.Caption = #1048#1084#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 151
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
        Width = 139
      end
      item
        CellButtons = <>
        DynProps = <>
        EditButtons = <>
        FieldName = '_BIRTHDAY'
        Footers = <>
        Title.Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
        Title.Font.Charset = DEFAULT_CHARSET
        Title.Font.Color = clWindowText
        Title.Font.Height = -13
        Title.Font.Name = 'Tahoma'
        Title.Font.Style = [fsBold]
        Title.TitleButton = True
        Width = 126
      end>
    object RowDetailData: TRowDetailPanelControlEh
    end
  end
  object bsSkinPanel1: TbsSkinPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 1025
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
      Width = 129
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
      Caption = ' '#1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1086#1074#1086#1075#1086'  '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton2Click
      ExplicitLeft = 8
      ExplicitTop = 10
      ExplicitHeight = 33
    end
    object bsSkinSpeedButton3: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 139
      Top = 4
      Width = 130
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
      Caption = '  '#1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100'  '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton3Click
      ExplicitLeft = 143
      ExplicitTop = 10
      ExplicitHeight = 33
    end
    object bsSkinSpeedButton4: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 275
      Top = 4
      Width = 126
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
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1087#1086#1083#1100#1079#1086#1074#1072#1090#1077#1083#1103
      ShowCaption = True
      NumGlyphs = 1
      Align = alLeft
      Spacing = 1
      OnClick = bsSkinSpeedButton4Click
    end
    object bsSkinSpeedButton5: TbsSkinSpeedButton
      AlignWithMargins = True
      Left = 407
      Top = 4
      Width = 146
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
      Left = 559
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
  object UniDataSource_Users: TUniDataSource
    DataSet = UniTable_Users
    Left = 687
    Top = 419
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
    Left = 264
    Top = 312
  end
  object UniTable_Users: TUniQuery
    Connection = MainForm.UniConnectionMain
    SQL.Strings = (
      
        'SELECT _ID, _TAB_NUM, _LAST_NAME, _NAME, _MIDDLE_NAME, _BIRTHDAY' +
        ', _POST FROM users')
    Left = 688
    Top = 368
    object UniTable_Users_ID: TStringField
      FieldName = '_ID'
      Required = True
      Size = 255
    end
    object UniTable_Users_TAB_NUM: TStringField
      FieldName = '_TAB_NUM'
      Size = 255
    end
    object UniTable_Users_LAST_NAME: TStringField
      FieldName = '_LAST_NAME'
      Size = 255
    end
    object UniTable_Users_NAME: TStringField
      FieldName = '_NAME'
      Size = 255
    end
    object UniTable_Users_MIDDLE_NAME: TStringField
      FieldName = '_MIDDLE_NAME'
      Size = 255
    end
    object UniTable_Users_BIRTHDAY: TDateField
      FieldName = '_BIRTHDAY'
    end
    object UniTable_Users_POST: TStringField
      FieldName = '_POST'
      Size = 255
    end
  end
  object FormSize1: TFormSize
    Location = plRegistry
    MagnetDistance = 32
    SaveUser = True
    SaveMachine = False
    SaveName = '.\FORM.INI'
    SaveKey = 'BaseUsersForm'
    Version = '1.3.1.5'
    Left = 472
    Top = 376
  end
end