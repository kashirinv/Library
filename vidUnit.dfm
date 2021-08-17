object vid: Tvid
  Left = 275
  Top = 303
  Width = 633
  Height = 516
  Caption = #1042#1099#1076#1072#1095#1072' '#1082#1085#1080#1075#1080
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 40
    Top = 456
    Width = 72
    Height = 13
    Caption = #1044#1072#1090#1072' '#1074#1099#1076#1072#1095#1080': '
  end
  object books: TListView
    Left = 8
    Top = 8
    Width = 609
    Height = 201
    Columns = <
      item
        Caption = #1053#1072#1079#1074#1072#1085#1080#1077
        Width = 200
      end
      item
        Caption = #1040#1074#1090#1086#1088
        Width = 100
      end
      item
        Caption = #1043#1086#1076' '#1080#1079#1076#1072#1085#1080#1103
        Width = 80
      end
      item
        Caption = #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1086
        Width = 100
      end
      item
        Caption = #1053#1086#1084#1077#1088' '#1080#1079#1076#1072#1085#1080#1103
        Width = 100
      end>
    ReadOnly = True
    RowSelect = True
    TabOrder = 0
    ViewStyle = vsReport
  end
  object chitateli: TListView
    Left = 8
    Top = 216
    Width = 609
    Height = 225
    Columns = <
      item
        Caption = #1060#1072#1084#1080#1083#1080#1103
        Width = 120
      end
      item
        Caption = #1048#1084#1103
        Width = 120
      end
      item
        Caption = #1054#1090#1095#1077#1089#1090#1074#1086
        Width = 120
      end
      item
        Caption = #1043#1086#1076' '#1088#1086#1078#1076
        Width = 65
      end
      item
        Caption = #1058#1077#1083#1077#1092#1086#1085
        Width = 100
      end>
    ReadOnly = True
    RowSelect = True
    TabOrder = 1
    ViewStyle = vsReport
  end
  object date: TDateTimePicker
    Left = 128
    Top = 451
    Width = 186
    Height = 21
    CalAlignment = dtaLeft
    Date = 40164.4645727662
    Time = 40164.4645727662
    DateFormat = dfShort
    DateMode = dmComboBox
    Kind = dtkDate
    ParseInput = False
    TabOrder = 2
  end
  object Button1: TButton
    Left = 352
    Top = 448
    Width = 209
    Height = 25
    Caption = #1042#1099#1076#1072#1090#1100' '#1082#1085#1080#1075#1091
    TabOrder = 3
    OnClick = Button1Click
  end
end
