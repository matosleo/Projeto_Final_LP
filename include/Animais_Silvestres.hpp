#ifndef ANIMAIS_SILVESTRES_HPP
#define ANIMAIS_SILVESTRES_HPP

class AnfibioNativo : public Anfibio , Nativo
{
public:
	AnfibioNativo( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _total_mudas = 0, std::string _ultima_muda = "0", std::string _ibama, 
			std::string _uf_origem, std::string _autorizacao )
		: Anfibio( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
					, _batismo, _total_mudas, _ultima_muda )
		, Nativo( _ibama, _uf_origem, _autorizacao )
		{	/*	Vazio	*/	}

	~AnfibioNativo();
	
};

class AnfibioExotico : public Anfibio , Exotico
{
public:
	AnfibioExotico( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _total_mudas = 0, std::string _ultima_muda = "0", std::string _ibama, std::string _pais_origem )
		: Anfibio( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
					, _batismo, _total_mudas, _ultima_muda )
		, Exotico( _ibama, _pais_origem )
		{	/*	Vazio	*/	}

	~AnfibioExotico();
	
};

class MamiferoNativo : public Mamifero , Nativo
{
public:
	MamiferoNativo( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			std::string _cor_pelo, std::string _ibama, std::string _uf_origem, std::string _autorizacao )
		: Mamifero( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
					, _batismo, _cor_pelo )
		, Nativo( _ibama, _uf_origem, _autorizacao )
		{	/*	Vazio	*/	}

	~MamiferoNativo();
	
};

class MamiferoExotico : public Mamifero , Exotico
{
public:
	MamiferoExotico( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			std::string _cor_pelo, std::string _ibama, std::string _pais_origem )
		: Mamifero( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador
					, _batismo, _cor_pelo )
		, Exotico( _ibama, _pais_origem )
		{	/*	Vazio	*/	}

	~MamiferoExotico();
	
};

class ReptilNativo : public Reptil , Nativo
{
public:
	ReptilNativo( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			bool _venenoso = false, std::string _tipo_veneno = "", std::string _ibama,
			std::string _uf_origem, std::string _autorizacao )
		: Reptil( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, 
					_batismo, _venenoso, _tipo_veneno )
		, Nativo( _ibama, _uf_origem, _autorizacao )
		{	/*	Vazio	*/	}

	~ReptilNativo();
	
};

class ReptilExotico : public Reptil , Exotico
{
public:
	ReptilExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			bool _venenoso = false, std::string _tipo_veneno = "", std::string _ibama, std::string _pais_origem )
		: Reptil( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador, 
					_batismo, _venenoso, _tipo_veneno )
		, Exotico( _ibama, _pais_origem )
		{	/*	Vazio	*/	}

	~ReptilExotico();
	
};

class AveNativo : public Ave , Nativo
{
public:
	AveNativo( int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _tamanho_bico, int _envergadura, std::string _ibama, std::string _uf_origem, std::string _autorizacao )
		: Ave( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
				_batismo, _tamanho_bico, _envergadura )
		, Nativo( _ibama, _uf_origem, _autorizacao )
		{	/*	Vazio	*/	}

	~AveNativo();
	
};

class AveExotico : public Ave , Exotico
{
public:
	AveExotico(int _id, std::string _classe, std::string _nome, std::string _cientifico, char _sexo, 
			float _tamanho, std::string _dieta, Veterinario _veterinario, Tratador _tratador, std::string _batismo,
			int _tamanho_bico, int _envergadura, std::string _ibama, std::string _pais_origem )
		: Ave( _id, _classe, _nome, _cientifico, _sexo, _tamanho, _dieta, _veterinario, _tratador,
				_batismo, _tamanho_bico, _envergadura )
		, Exotico( _ibama, _pais_origem )
		{	/*	Vazio	*/	}

	~AveExotico();
	
};

#endif