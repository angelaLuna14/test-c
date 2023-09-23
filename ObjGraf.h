#ifndef ObjGrafH
#define ObjGrafH

// Definición de la clase TObjGraf

class TObjGraf {};

#endif


class TObjGraf {

public:
   int        X;         // Propiedades
   int        Y;
   TColor     Color;
   TPaintBox *PaintBox;

   void Mostrar (void); // Métodos
};

class TObjGraf {
   ...

   // Constructor de objetos TObjGraf

   TObjGraf (TPaintBox *_PaintBox, TColor _Color=clBlack,
              int _X=0, int _Y=0);

   // El destructor sería: ~TObjGraf (void);
};


class TCirculo : public TObjGraf {

public:

   int Radio; // Propiedad exclusiva de TCirculo

};

//*************************************************/
// Definicion de la clase derivada TCuadrado.
// Deriva de la clase base TObjGraf
//*************************************************/

class TCuadrado : public TObjGraf {

public:

   int Lado; // Propiedad exclusiva de TCuadrado

};
