#ifndef SILVESTRE_HPP
#define SILVESTRE_HPP

class AnimalSilvestre
{
protected:
	std::string ibama;

public:

	std::string get_ibama( void );

	AnimalSilvestre( std::string _ibama ) : ibama( _ibama )
	{	/*	Vazio	*/	}

	~AnimalSilvestre();
	
};

class Nativo : public AnimalSilvestre
{
protected:
	std::string uf_origem;
	std::string autorizacao;

public:

	std::string get_uf_origem( void );
	std::string get_autorizacao( void );

	void set_autorizacao( std::string new_autorizacao );

	Nativo( std::string _ibama, std::string _uf_origem, std::string _autorizacao )
		: AnimalSilvestre( _ibama )
		, uf_origem( _uf_origem )
		, autorizacao( _autorizacao )
		{	/*	Vazio	*/	}

	~Nativo();
	
};

class Exotico : public AnimalSilvestre
{
protected:
	std::string pais_origem;

public:

	std::string get_pais_origem( void );

	Exotico( std::string _ibama, std::string _pais_origem )
		: AnimalSilvestre( _ibama )
		, pais_origem( _pais_origem )
		{	/*	Vazio	*/	}

	~Exotico();
	
};

#endif