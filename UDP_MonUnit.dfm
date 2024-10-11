object UDPMon: TUDPMon
  Left = 0
  Top = 0
  Caption = 'UDP Stream Monitor - 15 Aug 2024'
  ClientHeight = 322
  ClientWidth = 461
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object MemoDebug: TRichEdit
    Left = 8
    Top = 8
    Width = 425
    Height = 249
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Courier New'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Button1: TButton
    Left = 8
    Top = 263
    Width = 137
    Height = 25
    Caption = 'Start Monitoring'
    TabOrder = 1
    OnClick = Button1Click
  end
  object BN_Quit: TButton
    Left = 358
    Top = 263
    Width = 75
    Height = 25
    Caption = 'QUIT'
    TabOrder = 2
    OnClick = BN_QuitClick
  end
  object Timer1: TTimer
    OnTimer = Timer1Timer
    Left = 232
    Top = 232
  end
end
