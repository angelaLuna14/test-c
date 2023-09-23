
#include "ObjGraf.h"

void __fastcall TPpalFrm::FormCreate(TObject *Sender)
{
  TObjGraf ObjGraf1();
  TObjGraf ObjGraf2;
}


TObjGraf * ObjGraf;

void __fastcall TPpalFrm::FormCreate(TObject *Sender)
{
   ObjGraf = new TObjGraf;
}

TObjGraf * ObjGraf; 

void __fastcall TPpalFrm::FormCreate(TObject *Sender)
{
   ObjGraf = new TObjGraf;
}

void __fastcall TPpalFrm::FormDestroy(TObject *Sender)
{
   delete ObjGraf;
}

void __fastcall TPpalFrm::FormCreate(TObject *Sender)
{
   ...
   int ValorY;
   ...
   ObjGraf->X = 5;
   ValorY = ObjGraf->Y;
   ObjGraf->Mostrar();   //Equivalente a (*Obj).Mostrar();
}

void __fastcall TPpalFrm::FormCreate(TObject *Sender)
{
   ObjGraf = new TObjGraf (PaintBox, clRed, 10, 10);
}