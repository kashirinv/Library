//---------------------------------------------------------------------------

#ifndef dataUnitH
#define dataUnitH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ADODB.hpp>
#include <DB.hpp>
#include <ComCtrls.hpp>
//---------------------------------------------------------------------------
class Tdt : public TDataModule
{
__published:	// IDE-managed Components
    TADOConnection *con;
    TADOQuery *query;
private:	// User declarations
public:		// User declarations
    __fastcall Tdt(TComponent* Owner);


    void __fastcall qOpen(AnsiString sql);
    void __fastcall qExecute(AnsiString sql);

    void __fastcall qShow( TListView *view );

    int __fastcall fnInt(AnsiString name);
    AnsiString __fastcall fnStr(AnsiString name);
    int __fastcall fiInt(int nom);
    AnsiString __fastcall fiStr(int nom);
    void __fastcall Next();
    bool __fastcall End();
};
//---------------------------------------------------------------------------
extern PACKAGE Tdt *dt;
//---------------------------------------------------------------------------
#endif
