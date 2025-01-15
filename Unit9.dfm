object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Multicast Port Monitor - 15 Jan 2025'
  ClientHeight = 422
  ClientWidth = 611
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -10
  Font.Name = 'Segoe UI'
  Font.Style = []
  DesignSize = (
    611
    422)
  TextHeight = 12
  object MemoDebug: TMemo
    Left = 423
    Top = 117
    Width = 183
    Height = 300
    Anchors = [akLeft, akTop, akRight, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -10
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    ScrollBars = ssBoth
    TabOrder = 0
    ExplicitWidth = 160
    ExplicitHeight = 275
  end
  object BN_Listen: TButton
    Left = 423
    Top = 8
    Width = 81
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = BN_ListenClick
  end
  object CB_Debug: TCheckBox
    Left = 423
    Top = 94
    Width = 103
    Height = 17
    Caption = 'CB_Debug'
    TabOrder = 2
  end
  object BN_Quit: TButton
    Left = 509
    Top = 8
    Width = 81
    Height = 25
    Caption = 'Quit'
    TabOrder = 3
    OnClick = BN_QuitClick
  end
  object SG_StreamList: TStringGrid
    Left = 8
    Top = 8
    Width = 409
    Height = 409
    Anchors = [akLeft, akTop, akBottom]
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 4
    ExplicitHeight = 384
    ColWidths = (
      64
      79
      71
      75
      111)
  end
  object BN_Clear: TButton
    Left = 423
    Top = 39
    Width = 81
    Height = 25
    Caption = 'Clear/Reset'
    TabOrder = 5
    OnClick = BN_ClearClick
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 495
    Top = 168
  end
end
