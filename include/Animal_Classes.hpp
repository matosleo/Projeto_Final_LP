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

	Anfibio( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _total_mudas = 0, std::string _ultima_muda = "0" ) 
		: Animal( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
		, total_mudas( _total_mudas ), ultima_muda( _ultima_muda )
		{	/*	Vazio	*/	}

	~Anfibio();
	
};

class Mamifero : public Animal
{
private:
	std::string cor_pelo;

public:

	std::string get_cor_pelo( void );
//	std::string set_cor_pelo( std::string new_muda );

	Mamifero( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			std::string _cor_pelo ) 
		: Animal( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
		, cor_pelo( _cor_pelo )
		{	/*	Vazio	*/	}

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

	Reptil( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			bool _venenoso = false, std::string _tipo_veneno = "")
		: Animal( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
		, venenoso( _venenoso ), tipo_veneno( _tipo_veneno )
		{	/*	Vazio	*/	}

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

	Ave( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _tamanho_bico, int _envergadura ) 
		: Animal( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, _batismo )
		, tamanho_bico( _tamanho_bico ), envergadura( _envergadura )
		{	/*	Vazio	*/	}

	~Ave();
	
};

#endif