#ifndef ANIMAIS_SILVESTRES_HPP
#define ANIMAIS_SILVESTRES_HPP

class AnfibioNativo : public Anfibio , Nativo
{
public:
	AnfibioNativo();
	~AnfibioNativo();
	
};

class AnfibioExotico : public Anfibio , Exotico
{
public:
	AnfibioExotico();
	~AnfibioExotico();
	
};

class MamiferoNativo : public Mamifero , Nativo
{
public:
	MamiferoNativo();
	~MamiferoNativo();
	
};

class MamiferoExotico : public Mamifero , Exotico
{
public:
	MamiferoExotico();
	~MamiferoExotico();
	
};

class ReptilNativo : public Reptil , Nativo
{
public:
	ReptilNativo();
	~ReptilNativo();
	
};

class ReptilExotico : public Reptil , Exotico
{
public:
	ReptilExotico();
	~ReptilExotico();
	
};

class AveNativo : public Ave , Nativo
{
public:
	AveNativo();
	~AveNativo();
	
};

class AveExotico : public Ave , Exotico
{
public:
	AveExotico();
	~AveExotico();
	
};

#endif