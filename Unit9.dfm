object Form9: TForm9
  Left = 0
  Top = 0
  Margins.Left = 6
  Margins.Top = 6
  Margins.Right = 6
  Margins.Bottom = 6
  Caption = 'Multicast Port Monitor - 21 Oct 2024 '
  ClientHeight = 844
  ClientWidth = 1192
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -20
  Font.Name = 'Segoe UI'
  Font.Style = []
  PixelsPerInch = 192
  DesignSize = (
    1192
    844)
  TextHeight = 28
  object MemoDebug: TMemo
    Left = 846
    Top = 234
    Width = 335
    Height = 599
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Anchors = [akLeft, akTop, akRight, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssBoth
    TabOrder = 0
    ExplicitWidth = 1037
  end
  object BN_Listen: TButton
    Left = 846
    Top = 16
    Width = 162
    Height = 50
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Caption = 'Start'
    TabOrder = 1
    OnClick = BN_ListenClick
  end
  object CB_Debug: TCheckBox
    Left = 846
    Top = 188
    Width = 206
    Height = 34
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Caption = 'CB_Debug'
    TabOrder = 2
  end
  object BN_Quit: TButton
    Left = 1018
    Top = 16
    Width = 162
    Height = 50
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Caption = 'Quit'
    TabOrder = 3
    OnClick = BN_QuitClick
  end
  object GroupBox1: TGroupBox
    Left = 846
    Top = 78
    Width = 334
    Height = 98
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Caption = 'Multicast Address/Group'
    TabOrder = 4
    DesignSize = (
      334
      98)
    object TE_MCastGroup: TEdit
      Left = 6
      Top = 36
      Width = 322
      Height = 36
      Hint = 'This doesn'#39't seem to matter. It'#39's really just listening to ports'
      Margins.Left = 6
      Margins.Top = 6
      Margins.Right = 6
      Margins.Bottom = 6
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      Text = '239.255.1.1'
    end
  end
  object SG_StreamList: TStringGrid
    Left = 16
    Top = 16
    Width = 818
    Height = 817
    Margins.Left = 6
    Margins.Top = 6
    Margins.Right = 6
    Margins.Bottom = 6
    Anchors = [akLeft, akTop, akBottom]
    DefaultColWidth = 128
    DefaultRowHeight = 48
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    ColWidths = (
      128
      158
      141
      150
      222)
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 543
    Top = 120
  end
end
