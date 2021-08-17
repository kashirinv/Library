//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "MainUnit.h"
#include "dataUnit.h"
#include "vidUnit.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N2Click(TObject *Sender)
{
    // выход
    Close();
}
//---------------------------------------------------------------------------
// показ закладки с книгами
void __fastcall TForm1::books_strShow(TObject *Sender)
{
    dt->qOpen("SELECT id, name,author, gi, izdat, nom FROM book");
    dt->qShow(books);
}
//---------------------------------------------------------------------------
// двойной клик по книге - редактирование
void __fastcall TForm1::booksDblClick(TObject *Sender)
{
    if( books->Tag > 0 )
        book_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::book_strShow(TObject *Sender)
{
// редактор книг

    // новая
    if( books->Tag == 0 )
    {
        Edit2->Text = "";
        Edit3->Text = "";
        Edit4->Text = "";
        Edit5->Text = "";
        Edit6->Text = "";
        Edit7->Text = "";
        Edit8->Text = "";
        Edit9->Text = "";
        Memo1->Lines->Text = "";
    }else // старая
    {
        dt->qOpen("SELECT * FROM book WHERE id=" + IntToStr(books->Tag));
        Edit2->Text = dt->fnStr("name");
        Edit3->Text = dt->fnStr("author");
        Edit4->Text = dt->fnStr("udk");
        Edit5->Text = dt->fnStr("izdat");
        Edit6->Text = dt->fnStr("gi");
        Edit7->Text = dt->fnStr("cnt");
        Edit8->Text = dt->fnStr("perepl");
        Edit9->Text = dt->fnStr("nom");
        Memo1->Lines->Text = dt->fnStr("ref");
    }
}
//---------------------------------------------------------------------------
// клик в списке книг
void __fastcall TForm1::booksClick(TObject *Sender)
{
    if( books->ItemIndex < 0 )
    {
        books->Tag = 0;
    }else
    {
        // сохраняем идентификатор
        books->Tag = (int)books->Selected->Data;
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button4Click(TObject *Sender)
{
    // Закрыть редактор книг - отмена
    books_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button3Click(TObject *Sender)
{
    // сохранение книги
    if( StrToIntDef(Edit6->Text, -1) < 0 )
    {
        ShowMessage("Год издания введен неверно!");
        return;
    }
    if( StrToIntDef(Edit9->Text, -1) < 0 )
    {
        ShowMessage("Номер издания введен неверно!");
        return;
    }

    if( books->Tag == 0 )
    {
        dt->qExecute( "INSERT INTO book (name, author, udk, izdat, gi, cnt, perepl, nom, ref ) VALUES (" +
            QuotedStr(Edit2->Text) + "," +
            QuotedStr(Edit3->Text) + "," +
            QuotedStr(Edit4->Text) + "," +
            QuotedStr(Edit5->Text) + "," +
            QuotedStr(Edit6->Text) + "," +
            QuotedStr(Edit7->Text) + "," +
            QuotedStr(Edit8->Text) + "," +
            QuotedStr(Edit9->Text) + "," +
            QuotedStr(Memo1->Lines->Text) + ")" );
    }else
    {
        dt->qExecute( "UPDATE book SET name=" +
            QuotedStr(Edit2->Text) + "," +
            "author=" + QuotedStr(Edit3->Text) + "," +
            "udk=" + QuotedStr(Edit4->Text) + "," +
            "izdat=" + QuotedStr(Edit5->Text) + "," +
            "gi=" + QuotedStr(Edit6->Text) + "," +
            "cnt=" + QuotedStr(Edit7->Text) + "," +
            "perepl=" + QuotedStr(Edit8->Text) + "," +
            "nom=" + QuotedStr(Edit9->Text) + "," +
            "ref=" + QuotedStr(Memo1->Lines->Text) +
            " WHERE id=" + IntToStr(books->Tag) );
    }

    books_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N5Click(TObject *Sender)
{
    books->Tag = 0;
    book_str->Show();    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormShow(TObject *Sender)
{
    PageControl1->ActivePageIndex = 0;    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::chitateli_strShow(TObject *Sender)
{
    // отображение читателей
    dt->qOpen("SELECT id, Fam as name, im,otc, gr, tel FROM chitatel");
    dt->qShow( chitateli );
}
//---------------------------------------------------------------------------
void __fastcall TForm1::chitateliClick(TObject *Sender)
{
    if( chitateli->ItemIndex < 0 )
        chitateli->Tag = 0;
    else
        chitateli->Tag = (int)chitateli->Selected->Data;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::chitateliDblClick(TObject *Sender)
{
    if( chitateli->Tag > 0 )
        chitatel_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::chitatel_strShow(TObject *Sender)
{
    if( chitateli->Tag == 0 )
    {
        Edit10->Text = "";
        Edit11->Text = "";
        Edit12->Text = "";
        Edit13->Text = "";
        Edit14->Text = "";
        Edit15->Text = "";
        Edit16->Text = "";
        Edit17->Text = "";
        Edit18->Text = "";
        Edit19->Text = "";
        Edit20->Text = "";
    }else
    {
        dt->qOpen("SELECT * FROM chitatel WHERE id=" + IntToStr(chitateli->Tag));
        Edit10->Text = dt->fnStr("Fam");
        Edit11->Text = dt->fnStr("Im");
        Edit12->Text = dt->fnStr("Otc");
        Edit13->Text = dt->fnStr("gr");
        Edit14->Text = dt->fnStr("adr");
        Edit15->Text = dt->fnStr("rab");
        Edit16->Text = dt->fnStr("dol");
        Edit17->Text = dt->fnStr("tel");
        Edit18->Text = dt->fnStr("rtel");
        Edit19->Text = dt->fnStr("reg");
        Edit20->Text = dt->fnStr("note");
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button6Click(TObject *Sender)
{
    chitateli_str->Show();    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button5Click(TObject *Sender)
{
    if( StrToIntDef(Edit13->Text, -1) < 0 )
    {
        ShowMessage("Год рождения введен неверно!");
        return;
    }

    if( chitateli->Tag == 0 )
    {
        dt->qExecute( "INSERT INTO chitatel (Fam, Im, Otc,gr,adr,rab,dol,tel,rtel,reg,[note] ) VALUES (" +
            QuotedStr(Edit10->Text) + "," +
            QuotedStr(Edit11->Text) + "," +
            QuotedStr(Edit12->Text) + "," +
            QuotedStr(Edit13->Text) + "," +
            QuotedStr(Edit14->Text) + "," +
            QuotedStr(Edit15->Text) + "," +
            QuotedStr(Edit16->Text) + "," +
            QuotedStr(Edit17->Text) + "," +
            QuotedStr(Edit18->Text) + "," +
            QuotedStr(Edit19->Text) + "," +
            QuotedStr(Edit20->Text) + ")"  );
    }else
    {
        dt->qExecute( "UPDATE chitatel SET Fam=" +
            QuotedStr(Edit10->Text) + "," +
            "Im=" + QuotedStr(Edit11->Text) + "," +
            "Otc=" + QuotedStr(Edit12->Text) + "," +
            "gr=" + QuotedStr(Edit13->Text) + "," +
            "adr=" + QuotedStr(Edit14->Text) + "," +
            "rab=" + QuotedStr(Edit15->Text) + "," +
            "dol=" + QuotedStr(Edit16->Text) + "," +
            "tel=" + QuotedStr(Edit17->Text) + "," +
            "rtel=" + QuotedStr(Edit18->Text) + "," +
            "reg=" + QuotedStr(Edit19->Text) + "," +
            "[note]=" + QuotedStr(Edit20->Text) +
            " WHERE id=" + IntToStr(chitateli->Tag) );
    }

    chitateli_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N8Click(TObject *Sender)
{
    chitateli->Tag = 0;
    chitatel_str->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N9Click(TObject *Sender)
{
    // удаление книги
    if( books->Tag > 0 )
    {
        dt->qExecute("DELETE FROM book WHERE id=" + IntToStr(books->Tag));
        books_strShow(Sender);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N10Click(TObject *Sender)
{
    // удаление читателя
    if( chitateli->Tag > 0 )
    {
        dt->qExecute("DELETE FROM chitatel WHERE id=" + IntToStr(chitateli->Tag));
        chitateli_strShow(Sender);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::dolz_strShow(TObject *Sender)
{
    // показ должников
    dt->qOpen("SELECT * FROM dolz");
    dt->qShow(vidano);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::vidanoClick(TObject *Sender)
{
    if( vidano->ItemIndex < 0 )
        vidano->Tag = 0;
    else
        vidano->Tag = (int)vidano->Selected->Data;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N12Click(TObject *Sender)
{
    // возврат книги
    if( vidano->Tag != 0 )
    {
        dt->qExecute("DELETE FROM narukah WHERE book=" + IntToStr(vidano->Tag));
        dolz_strShow(Sender);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N13Click(TObject *Sender)
{
    vid->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
    books_strShow(Sender);    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button8Click(TObject *Sender)
{
    chitateli_strShow(Sender);    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    // поиск книги
    if( Edit1->Text != "" )
    {
        dt->qOpen("SELECT id, name,author, gi, izdat, nom FROM book "
                  "WHERE name LIKE '%" + Edit1->Text +
                  "%' OR author LIKE '%" + Edit1->Text +
                  "%' OR izdat LIKE '%" + Edit1->Text + "%'");
        dt->qShow(books);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button7Click(TObject *Sender)
{
    // поиск читателя
    if( Edit21->Text != "" )
    {
       dt->qOpen("SELECT id, Fam as name, im,otc, gr, tel FROM chitatel "
                  "WHERE Fam LIKE '%" + Edit21->Text +
                  "%' OR im LIKE '%" + Edit21->Text +
                  "%' OR otc LIKE '%" + Edit21->Text + "%'");
        dt->qShow(chitateli);
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::N14Click(TObject *Sender)
{
    // открытие отчета
	AnsiString file = ExtractFilePath( Application->ExeName ) + "Отчет.doc";
    ShellExecute( NULL, "open", file.c_str(),NULL,NULL, SW_MAXIMIZE );
    
}
//---------------------------------------------------------------------------

