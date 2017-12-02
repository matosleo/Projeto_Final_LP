#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal
{
private:
	int 		m_id;
	std::string m_classe;
	std::string m_nome;
	std::string m_cientifico;
	char 		m_sexo;
	float 		m_tamanho;
	std::string m_dieta;
	Veterinario m_veterinario;
	Tratador 	m_tratador;
	std::string m_batismo;

public:

	Animal(	int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo )
		: m_id( _id )
		, m_classe( _classe )
		, m_nome( _nome )
		, m_cientifico( _cientifico )
		, m_sexo( _sexo )
		, m_tamanho( _tamanho )
		, m_dieta( _dieta )
		, m_veterinario( _veterinario )
		, m_tratador( _tratador )
		, m_batismo( _batismo )
	{ /* Vazio */ }

	virtual ~Animal();

	int 		get_id( void );
	std::string get_classe( void );
	std::string get_nome( void );
	std::string get_cientifico( void );
	char 		get_sexo( void );
	float 		get_tamanho( void );
	std::string get_dieta( void );
	Veterinario get_veterinario( void );
	Tratador 	get_tratador( void );
	std::string get_batismo( void );

//	void set_id( int new_id );
//	void set_classe( void );
	void set_nome( std::string new_id );
//	void set_cientifico( void );
//	void set_sexo( void );
	void set_tamanho( float new_id );
	void set_dieta( std::string new_id );
	void set_veterinario( Veterinario new_id );
	void set_tratador( Tratador new_id );
//	void set_batismo( void );

};

#endif