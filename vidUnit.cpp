//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "vidUnit.h"
#include "dataUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
Tvid *vid;
//---------------------------------------------------------------------------
__fastcall Tvid::Tvid(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall Tvid::FormShow(TObject *Sender)
{
    // запрос справочников
    dt->qOpen("SELECT id, name,author, gi, izdat, nom FROM book");
    dt->qShow(books);

    dt->qOpen("SELECT id, Fam as name, im,otc, gr, tel FROM chitatel");
    dt->qShow( chitateli );
    
}
//---------------------------------------------------------------------------
void __fastcall Tvid::Button1Click(TObject *Sender)
{

    if( books->ItemIndex < 0 )
    {
        ShowMessage("Не выбрана книга!");
        return;
    }
    if( chitateli->ItemIndex < 0 )
    {
        ShowMessage("Не выбран читатель!");
        return;
    }

    // получение идентификаторов читателя и книги
    int chi = (int)chitateli->Selected->Data;
    int book = (int)books->Selected->Data;

    // проверка не выдана ли книга
    dt->qOpen("SELECT * FROM narukah WHERE book=" + IntToStr(book));
    if( !dt->End() )
    {
        ShowMessage("Извините, книга уже на руках читателя!");
        return;
    }

    // запись о взятии книги
    dt->qExecute("INSERT INTO narukah (book,chitatel,dt) VALUES (" +
        IntToStr(book) + "," + IntToStr(chi) + "," +
        QuotedStr(date->Date.FormatString("dd/mm/yyyy")) + ")");

    Close();
}
//---------------------------------------------------------------------------
