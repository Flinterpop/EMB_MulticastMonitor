object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Multicast Port Monitor - '
  ClientHeight = 422
  ClientWidth = 771
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  DesignSize = (
    771
    422)
  TextHeight = 15
  object MemoDebug: TMemo
    Left = 425
    Top = 45
    Width = 340
    Height = 368
    Anchors = [akLeft, akTop, akRight, akBottom]
    ScrollBars = ssBoth
    TabOrder = 0
    ExplicitWidth = 347
    ExplicitHeight = 405
  end
  object BN_Listen: TButton
    Left = 239
    Top = 14
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 1
    OnClick = BN_ListenClick
  end
  object CB_Debug: TCheckBox
    Left = 425
    Top = 22
    Width = 97
    Height = 17
    Caption = 'CB_Debug'
    TabOrder = 2
  end
  object BN_Quit: TButton
    Left = 325
    Top = 14
    Width = 75
    Height = 25
    Caption = 'Quit'
    TabOrder = 3
    OnClick = BN_QuitClick
  end
  object GroupBox1: TGroupBox
    Left = 239
    Top = 45
    Width = 161
    Height = 49
    Caption = 'Multicast Address/Group'
    TabOrder = 4
    DesignSize = (
      161
      49)
    object TE_MCastGroup: TEdit
      Left = 3
      Top = 18
      Width = 155
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
  object GroupBox2: TGroupBox
    Left = 239
    Top = 100
    Width = 98
    Height = 314
    Anchors = [akLeft, akTop, akBottom]
    Caption = 'Ports To Monitor'
    TabOrder = 5
    ExplicitHeight = 434
    DesignSize = (
      98
      314)
    object TM_PortList: TMemo
      Left = 3
      Top = 16
      Width = 92
      Height = 295
      Anchors = [akLeft, akTop, akBottom]
      Lines.Strings = (
        '5001'
        '5002'
        '5003'
        '5004'
        '5005'
        '5006'
        '5011'
        '5012'
        '5013'
        '5014'
        '5015'
        '5016'
        '5017'
        '7777'
        '6000'
        '6969')
      TabOrder = 0
      ExplicitHeight = 402
    end
  end
  object TM_Summary: TRichEdit
    Left = 8
    Top = 15
    Width = 201
    Height = 399
    Anchors = [akLeft, akTop, akBottom]
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Courier New'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 6
    ExplicitHeight = 403
  end
  object Timer1: TTimer
    Interval = 250
    OnTimer = Timer1Timer
    Left = 368
    Top = 344
  end
end
