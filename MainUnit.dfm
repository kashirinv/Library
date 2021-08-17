object Form1: TForm1
  Left = 332
  Top = 272
  Width = 705
  Height = 568
  Caption = #1052#1080#1085#1080'-'#1073#1080#1073#1083#1080#1086#1090#1077#1082#1072
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object PageControl1: TPageControl
    Left = 0
    Top = 0
    Width = 697
    Height = 514
    ActivePage = chitateli_str
    Align = alClient
    TabIndex = 1
    TabOrder = 0
    object books_str: TTabSheet
      Caption = #1050#1085#1080#1075#1080
      OnShow = books_strShow
      object books: TListView
        Left = 0
        Top = 0
        Width = 689
        Height = 432
        Align = alClient
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
        OnClick = booksClick
        OnDblClick = booksDblClick
      end
      object GroupBox1: TGroupBox
        Left = 0
        Top = 432
        Width = 689
        Height = 54
        Align = alBottom
        Caption = #1055#1086#1080#1089#1082
        TabOrder = 1
        object Edit1: TEdit
          Left = 16
          Top = 21
          Width = 417
          Height = 21
          TabOrder = 0
        end
        object Button1: TButton
          Left = 437
          Top = 20
          Width = 75
          Height = 25
          Caption = #1048#1089#1082#1072#1090#1100
          TabOrder = 1
          OnClick = Button1Click
        end
        object Button2: TButton
          Left = 597
          Top = 20
          Width = 75
          Height = 25
          Caption = #1057#1073#1088#1086#1089
          TabOrder = 2
          OnClick = Button2Click
        end
      end
    end
    object chitateli_str: TTabSheet
      Caption = #1063#1080#1090#1072#1090#1077#1083#1080
      ImageIndex = 1
      OnShow = chitateli_strShow
      object chitateli: TListView
        Left = 0
        Top = 0
        Width = 689
        Height = 432
        Align = alClient
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
        TabOrder = 0
        ViewStyle = vsReport
        OnClick = chitateliClick
        OnDblClick = chitateliDblClick
      end
      object GroupBox2: TGroupBox
        Left = 0
        Top = 432
        Width = 689
        Height = 54
        Align = alBottom
        Caption = #1055#1086#1080#1089#1082
        TabOrder = 1
        object Edit21: TEdit
          Left = 16
          Top = 21
          Width = 417
          Height = 21
          TabOrder = 0
        end
        object Button7: TButton
          Left = 437
          Top = 20
          Width = 75
          Height = 25
          Caption = #1048#1089#1082#1072#1090#1100
          TabOrder = 1
          OnClick = Button7Click
        end
        object Button8: TButton
          Left = 597
          Top = 20
          Width = 75
          Height = 25
          Caption = #1057#1073#1088#1086#1089
          TabOrder = 2
          OnClick = Button8Click
        end
      end
    end
    object book_str: TTabSheet
      Caption = 'book_str'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ImageIndex = 2
      ParentFont = False
      TabVisible = False
      OnShow = book_strShow
      object Label1: TLabel
        Left = 65
        Top = 24
        Width = 97
        Height = 13
        Alignment = taRightJustify
        Caption = #1053#1072#1079#1074#1072#1085#1080#1077' '#1082#1085#1080#1075#1080
      end
      object Label2: TLabel
        Left = 126
        Top = 48
        Width = 36
        Height = 13
        Alignment = taRightJustify
        Caption = #1040#1074#1090#1086#1088
      end
      object Label3: TLabel
        Left = 86
        Top = 72
        Width = 76
        Height = 13
        Alignment = taRightJustify
        Caption = #1048#1085#1076#1077#1082#1089' '#1059#1044#1050
      end
      object Label4: TLabel
        Left = 77
        Top = 96
        Width = 85
        Height = 13
        Alignment = taRightJustify
        Caption = #1048#1079#1076#1072#1090#1077#1083#1100#1089#1090#1074#1086
      end
      object Label5: TLabel
        Left = 87
        Top = 120
        Width = 75
        Height = 13
        Alignment = taRightJustify
        Caption = #1043#1086#1076' '#1080#1079#1076#1072#1085#1080#1103
      end
      object Label6: TLabel
        Left = 40
        Top = 144
        Width = 122
        Height = 13
        Alignment = taRightJustify
        Caption = #1050#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1089#1090#1088#1072#1085#1080#1094
      end
      object Label7: TLabel
        Left = 73
        Top = 168
        Width = 89
        Height = 13
        Alignment = taRightJustify
        Caption = #1058#1080#1088' '#1087#1077#1088#1077#1087#1083#1077#1090#1072
      end
      object Label8: TLabel
        Left = 69
        Top = 192
        Width = 93
        Height = 13
        Alignment = taRightJustify
        Caption = #1053#1086#1084#1077#1088' '#1080#1079#1076#1072#1085#1080#1103
      end
      object Label9: TLabel
        Left = 336
        Top = 24
        Width = 56
        Height = 13
        Caption = #1056#1077#1092#1077#1088#1072#1090':'
      end
      object Edit2: TEdit
        Left = 168
        Top = 22
        Width = 121
        Height = 21
        TabOrder = 0
      end
      object Edit3: TEdit
        Left = 168
        Top = 46
        Width = 121
        Height = 21
        TabOrder = 1
      end
      object Edit4: TEdit
        Left = 168
        Top = 70
        Width = 121
        Height = 21
        TabOrder = 2
      end
      object Edit5: TEdit
        Left = 168
        Top = 94
        Width = 121
        Height = 21
        TabOrder = 3
      end
      object Edit6: TEdit
        Left = 168
        Top = 118
        Width = 121
        Height = 21
        TabOrder = 4
      end
      object Edit7: TEdit
        Left = 168
        Top = 142
        Width = 121
        Height = 21
        TabOrder = 5
      end
      object Edit8: TEdit
        Left = 168
        Top = 166
        Width = 121
        Height = 21
        TabOrder = 6
      end
      object Edit9: TEdit
        Left = 168
        Top = 190
        Width = 121
        Height = 21
        TabOrder = 7
      end
      object Memo1: TMemo
        Left = 336
        Top = 40
        Width = 337
        Height = 169
        Lines.Strings = (
          'Memo1')
        TabOrder = 8
      end
      object Button3: TButton
        Left = 216
        Top = 224
        Width = 75
        Height = 25
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
        TabOrder = 9
        OnClick = Button3Click
      end
      object Button4: TButton
        Left = 312
        Top = 224
        Width = 75
        Height = 25
        Caption = #1054#1090#1084#1077#1085#1072
        TabOrder = 10
        OnClick = Button4Click
      end
    end
    object chitatel_str: TTabSheet
      Caption = 'chitatel_str'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ImageIndex = 3
      ParentFont = False
      TabVisible = False
      OnShow = chitatel_strShow
      object Label10: TLabel
        Left = 225
        Top = 24
        Width = 57
        Height = 13
        Alignment = taRightJustify
        Caption = #1060#1072#1084#1080#1083#1080#1103
      end
      object Label11: TLabel
        Left = 256
        Top = 48
        Width = 26
        Height = 13
        Alignment = taRightJustify
        Caption = #1048#1084#1103
      end
      object Label12: TLabel
        Left = 226
        Top = 72
        Width = 56
        Height = 13
        Alignment = taRightJustify
        Caption = #1054#1090#1095#1077#1089#1090#1074#1086
      end
      object Label13: TLabel
        Left = 198
        Top = 96
        Width = 84
        Height = 13
        Alignment = taRightJustify
        Caption = #1043#1086#1076' '#1088#1086#1078#1076#1077#1085#1080#1103
      end
      object Label14: TLabel
        Left = 245
        Top = 120
        Width = 37
        Height = 13
        Alignment = taRightJustify
        Caption = #1040#1076#1088#1077#1089
      end
      object Label15: TLabel
        Left = 197
        Top = 144
        Width = 85
        Height = 13
        Alignment = taRightJustify
        Caption = #1052#1077#1089#1090#1086' '#1088#1072#1073#1086#1090#1099
      end
      object Label16: TLabel
        Left = 214
        Top = 168
        Width = 68
        Height = 13
        Alignment = taRightJustify
        Caption = #1044#1086#1083#1078#1085#1086#1089#1090#1100
      end
      object Label17: TLabel
        Left = 164
        Top = 192
        Width = 118
        Height = 13
        Alignment = taRightJustify
        Caption = #1044#1086#1084#1072#1096#1085#1080#1081' '#1090#1077#1083#1077#1092#1086#1085
      end
      object Label18: TLabel
        Left = 178
        Top = 216
        Width = 104
        Height = 13
        Alignment = taRightJustify
        Caption = #1056#1072#1073#1086#1095#1080#1081' '#1090#1077#1083#1077#1092#1086#1085
      end
      object Label19: TLabel
        Left = 172
        Top = 240
        Width = 110
        Height = 13
        Alignment = taRightJustify
        Caption = #1044#1072#1090#1072' '#1088#1077#1075#1080#1089#1090#1088#1072#1094#1080#1080
      end
      object Label20: TLabel
        Left = 230
        Top = 264
        Width = 52
        Height = 13
        Alignment = taRightJustify
        Caption = #1054#1090#1084#1077#1090#1082#1080
      end
      object Edit10: TEdit
        Left = 288
        Top = 22
        Width = 161
        Height = 21
        TabOrder = 0
      end
      object Edit11: TEdit
        Left = 288
        Top = 46
        Width = 161
        Height = 21
        TabOrder = 1
      end
      object Edit12: TEdit
        Left = 288
        Top = 70
        Width = 161
        Height = 21
        TabOrder = 2
      end
      object Edit13: TEdit
        Left = 288
        Top = 94
        Width = 161
        Height = 21
        TabOrder = 3
      end
      object Edit14: TEdit
        Left = 288
        Top = 118
        Width = 161
        Height = 21
        TabOrder = 4
      end
      object Edit15: TEdit
        Left = 288
        Top = 142
        Width = 161
        Height = 21
        TabOrder = 5
      end
      object Edit16: TEdit
        Left = 288
        Top = 166
        Width = 161
        Height = 21
        TabOrder = 6
      end
      object Edit17: TEdit
        Left = 288
        Top = 190
        Width = 161
        Height = 21
        TabOrder = 7
      end
      object Edit18: TEdit
        Left = 288
        Top = 214
        Width = 161
        Height = 21
        TabOrder = 8
      end
      object Edit20: TEdit
        Left = 288
        Top = 262
        Width = 161
        Height = 21
        TabOrder = 9
      end
      object Button5: TButton
        Left = 240
        Top = 296
        Width = 75
        Height = 25
        Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100
        TabOrder = 10
        OnClick = Button5Click
      end
      object Button6: TButton
        Left = 352
        Top = 296
        Width = 75
        Height = 25
        Caption = #1054#1090#1084#1077#1085#1072
        TabOrder = 11
        OnClick = Button6Click
      end
      object Edit19: TEdit
        Left = 288
        Top = 238
        Width = 161
        Height = 21
        TabOrder = 12
      end
    end
    object dolz_str: TTabSheet
      Caption = #1044#1086#1083#1078#1085#1080#1082#1080
      ImageIndex = 4
      OnShow = dolz_strShow
      object vidano: TListView
        Left = 0
        Top = 0
        Width = 689
        Height = 486
        Align = alClient
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
            Caption = #1050#1085#1080#1075#1072
            Width = 150
          end
          item
            Caption = #1042#1099#1076#1072#1085#1072
            Width = 100
          end>
        ReadOnly = True
        RowSelect = True
        TabOrder = 0
        ViewStyle = vsReport
        OnClick = vidanoClick
      end
    end
  end
  object MainMenu1: TMainMenu
    Left = 40
    Top = 40
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1042#1099#1093#1086#1076
        OnClick = N2Click
      end
    end
    object N3: TMenuItem
      Caption = #1050#1085#1080#1075#1080
      object N4: TMenuItem
        Caption = #1056#1077#1076#1072#1082#1090#1086#1088' '#1090#1077#1082#1091#1097#1077#1081
        OnClick = booksDblClick
      end
      object N5: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1082#1085#1080#1075#1091
        OnClick = N5Click
      end
      object N9: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N9Click
      end
    end
    object N6: TMenuItem
      Caption = #1063#1080#1090#1072#1090#1077#1083#1080
      object N7: TMenuItem
        Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100' '#1090#1077#1082#1091#1097#1077#1075#1086
        OnClick = chitateliDblClick
      end
      object N8: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N8Click
      end
      object N10: TMenuItem
        Caption = #1059#1076#1072#1083#1080#1090#1100
        OnClick = N10Click
      end
    end
    object N11: TMenuItem
      Caption = #1042#1099#1076#1072#1085#1085#1099#1077' '#1082#1085#1080#1075#1080
      object N12: TMenuItem
        Caption = #1042#1099#1073#1088#1072#1085#1085#1072#1103' '#1074#1086#1079#1074#1088#1072#1097#1077#1085#1072
        OnClick = N12Click
      end
    end
    object N13: TMenuItem
      Caption = #1042#1099#1076#1072#1090#1100' '#1082#1085#1080#1075#1091
      OnClick = N13Click
    end
    object N14: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      OnClick = N14Click
    end
  end
end
