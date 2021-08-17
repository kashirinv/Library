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
    // ������ ������������
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
        ShowMessage("�� ������� �����!");
        return;
    }
    if( chitateli->ItemIndex < 0 )
    {
        ShowMessage("�� ������ ��������!");
        return;
    }

    // ��������� ��������������� �������� � �����
    int chi = (int)chitateli->Selected->Data;
    int book = (int)books->Selected->Data;

    // �������� �� ������ �� �����
    dt->qOpen("SELECT * FROM narukah WHERE book=" + IntToStr(book));
    if( !dt->End() )
    {
        ShowMessage("��������, ����� ��� �� ����� ��������!");
        return;
    }

    // ������ � ������ �����
    dt->qExecute("INSERT INTO narukah (book,chitatel,dt) VALUES (" +
        IntToStr(book) + "," + IntToStr(chi) + "," +
        QuotedStr(date->Date.FormatString("dd/mm/yyyy")) + ")");

    Close();
}
//---------------------------------------------------------------------------
