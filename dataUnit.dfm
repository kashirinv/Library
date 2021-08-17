object dt: Tdt
  OldCreateOrder = False
  Left = 525
  Top = 393
  Height = 150
  Width = 215
  object con: TADOConnection
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=biblioteka.mdb;Pers' +
      'ist Security Info=False'
    LoginPrompt = False
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 48
    Top = 24
  end
  object query: TADOQuery
    Connection = con
    Parameters = <>
    Left = 120
    Top = 24
  end
end
