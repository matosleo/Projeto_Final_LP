#ifndef ANIMAL_CLASSES_HPP
#define ANIMAL_CLASSES_HPP

class Anfibio : public Animal
{
private:
	int total_mudas;
	std::string ultima_muda;

public:

	int get_total_mudas( void );
	std::string get_ultima_muda( void );

	void set_total_mudas( int new_total );
	void set_ultima_muda( std::string new_muda );

	Anfibio();
	~Anfibio();
	
};

class Mamifero : public Animal
{
private:
	std::string cor_pelo;

public:

	std::string get_cor_pelo( void );
//	std::string set_cor_pelo( std::string new_muda );

	Mamifero();
	~Mamifero();
	
};

class Reptil : public Animal
{
private:
	bool venenoso;
	std::string tipo_veneno;

public:

	bool is_venenoso( void );
	std::string get_tipo_veneno( void );

	Reptil();
	~Reptil();
	
};

class Ave : public Animal
{
private:
	int tamanho_bico;
	int envergadura;

public:

	int get_tamanho_bico( void );
	int get_tamanho_bico( void );

	void set_envergadura( int new_envergadura );
	void set_envergadura( int new_envergadura );

	Ave();
	~Ave();
	
};

#endif