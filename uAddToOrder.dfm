object AddToOrderForm: TAddToOrderForm
  Left = 0
  Top = 0
  BorderIcons = []
  Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1090#1086#1074#1072#1088'/'#1091#1089#1083#1091#1075#1091' '#1074' '#1079#1072#1082#1072#1079
  ClientHeight = 599
  ClientWidth = 853
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesktopCenter
  Scaled = False
  PixelsPerInch = 96
  TextHeight = 13
  object bsSkinPanel2: TbsSkinPanel
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 847
    Height = 593
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
    Caption = 'bsSkinPanel2'
    Align = alClient
    ExplicitLeft = 184
    ExplicitTop = 192
    ExplicitWidth = 150
    ExplicitHeight = 150
    object DBGridEh: TDBGridEh
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 839
      Height = 585
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
      TabOrder = 0
      TitleParams.Color = 12500670
      TitleParams.FillStyle = cfstThemedEh
      TitleParams.MultiTitle = True
      TitleParams.SecondColor = 14145495
      OnDblClick = DBGridEhDblClick
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
          FieldName = '_BARCODE'
          Footers = <>
          Title.Caption = #1064#1090#1088#1080#1093#1082#1086#1076
          Title.Font.Charset = DEFAULT_CHARSET
          Title.Font.Color = clWindowText
          Title.Font.Height = -13
          Title.Font.Name = 'Tahoma'
          Title.Font.Style = [fsBold]
          Title.TitleButton = True
          Visible = False
          Width = 144
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
    Left = 424
    Top = 368
  end
end
