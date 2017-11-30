#ifndef PET_FERA_HPP
#define PET_FERA_HPP

class Pet_Fera
{



public:
	Pet_Fera();
	~Pet_Fera();

	bool cadastrar_veterinario();
	bool cadastrar_tratador();
	bool cadastrar_anfibio();
	bool cadastrar_mamifero();
	bool cadastrar_reptil();
	bool cadastrar_ave();

	bool remover_veterinario();
	bool remover_tratador();
	bool remover_anfibio();
	bool remover_mamifero();
	bool remover_reptil();
	bool remover_ave();

	bool alterar_anfibio();
	bool alterar_mamifero();
	bool alterar_reptil();
	bool alterar_ave();
		
};

#endif