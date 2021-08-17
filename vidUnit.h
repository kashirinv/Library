//---------------------------------------------------------------------------

#ifndef vidUnitH
#define vidUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tvid : public TForm
{
__published:	// IDE-managed Components
    TListView *books;
    TListView *chitateli;
    TLabel *Label1;
    TDateTimePicker *date;
    TButton *Button1;
    void __fastcall FormShow(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall Tvid(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE Tvid *vid;
//---------------------------------------------------------------------------
#endif
