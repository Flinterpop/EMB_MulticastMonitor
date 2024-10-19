object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Multicast Port Monitor - '
  ClientHeight = 422
  ClientWidth = 947
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  DesignSize = (
    947
    422)
  TextHeight = 15
  object MemoDebug: TMemo
    Left = 616
    Top = 8
    Width = 323
    Height = 406
    Anchors = [akLeft, akTop, akRight, akBottom]
    ScrollBars = ssBoth
    TabOrder = 0
    ExplicitWidth = 315
    ExplicitHeight = 381
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
  object GroupBox1: TGroupBox
    Left = 423
    Top = 39
    Width = 167
    Height = 49
    Caption = 'Multicast Address/Group'
    TabOrder = 4
    DesignSize = (
      167
      49)
    object TE_MCastGroup: TEdit
      Left = 3
      Top = 18
      Width = 161
      Height = 23
      Hint = 'This doesn'#39't seem to matter. It'#39's really just listening to ports'
      Alignment = taCenter
      Anchors = [akLeft, akTop, akRight, akBottom]
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      Text = '239.255.1.1'
    end
  end
  object BN_AddPort: TButton
    Left = 423
    Top = 131
    Width = 75
    Height = 25
    Caption = 'Add New'
    TabOrder = 5
  end
  object SG_StreamList: TStringGrid
    Left = 8
    Top = 8
    Width = 409
    Height = 396
    Anchors = [akLeft, akTop, akBottom]
    TabOrder = 6
    ExplicitHeight = 371
    ColWidths = (
      64
      120
      79
      64
      64)
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 543
    Top = 120
  end
end
