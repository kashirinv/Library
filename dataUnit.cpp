//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "dataUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tdt *dt;
//---------------------------------------------------------------------------
__fastcall Tdt::Tdt(TComponent* Owner)
    : TDataModule(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tdt::qOpen(AnsiString sql)
{
    // запрос на выборку
    query->Close();
    query->SQL->Clear();
    query->SQL->Add(sql);
    query->Open();
}
//---------------------------------------------------------------------------
void __fastcall Tdt::qExecute(AnsiString sql)
{
    // исполняемый запрос
    query->Close();
    query->SQL->Clear();
    query->SQL->Add(sql);
    query->ExecSQL();
}
//---------------------------------------------------------------------------
void __fastcall Tdt::qShow( TListView *view )
{
    // вывод выборки в таблицу на форме

	view->Items->Clear();
    TListItem *item;
    int cnt;

    // число столбцов
	cnt = view->Columns->Count + 1;

    // цикл по всем записям
	while( !End() )
    {
        // вывод
		item = view->Items->Add();
        item->Data = (void *)( fnInt("id") );
        item->Caption = fnStr("name");
        for( int i = 2; i < cnt; i++ ) item->SubItems->Add( fiStr(i) );
    	Next();
    }
}
//---------------------------------------------------------------------------
// получение поля по имени
// числового
int __fastcall Tdt::fnInt(AnsiString name)
{
    return query->FieldByName(name)->AsInteger;
}
//---------------------------------------------------------------------------
// строкового
AnsiString __fastcall Tdt::fnStr(AnsiString name)
{
    return query->FieldByName(name)->AsString;
}
//---------------------------------------------------------------------------
// то же по индексу
int __fastcall Tdt::fiInt(int nom)
{
    return query->Fields->Fields[nom]->AsInteger;
}
//---------------------------------------------------------------------------
AnsiString __fastcall Tdt::fiStr(int nom)
{
    return query->Fields->Fields[nom]->AsString;
}
//---------------------------------------------------------------------------
// следующая запись в выборке
void __fastcall Tdt::Next()
{
    query->Next();
}
//---------------------------------------------------------------------------
// проверка "конца" выборки
bool __fastcall Tdt::End()
{
    return query->Eof;
}
//---------------------------------------------------------------------------
