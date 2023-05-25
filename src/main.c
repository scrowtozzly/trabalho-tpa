// Essa clinica nao tem nenhuma intencao de lucro ou de repassar informacoes.
// Ela e feita apenas com fins de estudo para linguagem C.
#include <stdio.h>
#include <stdlib.h>

#define MAX_STRINGS_FOR_GENDER 4
#define MAX_LENGTH_FOR_STRINGS 50
#define BOOKS 4
#define LENGTH_FOR_SYNOPSIS 1000

void evaluation_of_recomendation() {
  int evaluation;

  printf("O que voce achou do nosso serviço?\n\n");
  printf("[1] - BOM\n[2] - OK\n[3] - RUIM\n\n");

  scanf("%d", &evaluation);

  switch (evaluation) {
  case 1:
    printf("\nObrigado!\n");
    break;
  case 2:
    printf("\nOK! Entendemos.\n");
    break;
  case 3:
    printf(
        "\nTomara que na proxima vez voce tenha uma experiencia melhor. :(\n");
    break;
  default:
    return;
  }
}

void book_childrens() {
  char genders[MAX_STRINGS_FOR_GENDER][MAX_LENGTH_FOR_STRINGS] = {
      "[1] - Misterio", "[2] - Aventura", "[3] - Suspense", "[4] - Fantasia"};

  char general_books[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Sofia Lima - Aventura no reino dos bichinhos: Joãozinho descobre um "
      "reino mágico onde os animais falam e "
      "têm vidas emocionantes. Ele se torna amigo de um grupo de animais "
      "corajosos e juntos embarcam em uma jornada cheia de perigos, desafios e "
      "descobertas incríveis. Aventuras no Reino dos Bichinhos é uma história "
      "encantadora sobre amizade, coragem e imaginação.",
      "Gabriel Souza - O misterio da floresta encantada: Laura e seu fiel "
      "cachorrinho, Max, se aventuram na floresta encantada próxima à sua "
      "casa. Lá, eles encontram criaturas mágicas, como fadas, elfos e "
      "unicórnios. Mas quando um tesouro valioso desaparece misteriosamente, "
      "eles precisam desvendar enigmas e seguir pistas para solucionar o "
      "mistério da floresta encantada.",
      "Isabella Oliveira - O festival dos sonhos: Marina e seu amigo Pedro "
      "recebem um convite para participar do Festival dos Sonhos, um evento "
      "mágico onde as crianças podem criar e realizar qualquer desejo em seus "
      "sonhos. Ao explorar esse mundo de fantasia, eles enfrentam desafios "
      "emocionantes e descobrem a importância de acreditar em si mesmos. O "
      "Festival dos Sonhos é uma história cheia de imaginação e lições "
      "valiosas.",
      "Miguel Torres - As aventuras dos super amigos: Lucas, Ana e João são "
      "três amigos com superpoderes incríveis. Juntos, eles formam um time de "
      "super-heróis e enfrentam vilões poderosos para proteger a cidade. Com "
      "suas habilidades únicas e trabalho em equipe, eles embarcam em "
      "emocionantes missões, usando seus poderes para salvar o dia e mostrar o "
      "verdadeiro significado da amizade."};

  char books_mystery[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Maria Silva - O Mistério do Tesouro Perdido: João e Ana descobrem um "
      "antigo mapa que os leva a uma emocionante busca por um tesouro "
      "escondido. Eles enfrentam enigmas, pistas secretas e perigosas "
      "armadilhas enquanto tentam desvendar o mistério do tesouro perdido. "
      "Será que eles conseguirão encontrá-lo antes que os vilões atrapalhem "
      "seus planos?",
      "Pedro Almeida - O caso do gato desaparecido: Laura e Marcos são "
      "detetives mirins e são chamados para solucionar o caso do gato "
      "desaparecido da vizinhança. Eles seguem pistas, interrogam suspeitos e "
      "usam seu raciocínio para desvendar o paradeiro do felino. Será que eles "
      "conseguirão resolver o mistério e encontrar o gato antes que seja tarde "
      "demais?",
      "Ana Oliveira - O enigma da casa assombrada: Joãozinho e Maria estão "
      "explorando uma casa abandonada conhecida por suas histórias "
      "assustadoras. Enquanto investigam os segredos sombrios da casa, eles se "
      "deparam com ruídos misteriosos, objetos que se movem sozinhos e sombras "
      "sinistras. Será que eles conseguirão desvendar o enigma por trás da "
      "casa assombrada e descobrir a verdade por trás de seus mistérios?",
      "Andre Santos - O roubo da joia preciosa: Lucas e Juliana são jovens "
      "detetives que se envolvem em uma emocionante investigação após o roubo "
      "de uma valiosa joia em um museu. Eles seguem pistas, entrevistam "
      "suspeitos e enfrentam perigos para recuperar a joia e desvendar a "
      "identidade do ladrão. Será que eles conseguirão resolver esse mistério "
      "e trazer justiça de volta ao museu?"};

  char books_fantasy[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Ana Silva - A Ilha Encantada: Em A Ilha Encantada, Pedro e Maria, dois "
      "irmãos curiosos, encontram um mapa misterioso que os leva a uma ilha "
      "mágica. Lá, eles descobrem criaturas encantadoras, enfrentam desafios "
      "emocionantes e aprendem importantes lições sobre coragem e amizade.",
      "Luisa Santos - O Mundo dos Sonhos: No livro O Mundo dos Sonhos, Lucas e "
      "Sofia são transportados para um mundo de fantasia enquanto dormem. Eles "
      "exploram terras encantadas, conhecem personagens incríveis e desvendam "
      "segredos antigos. Essa aventura mágica os ensina sobre imaginação, "
      "perseverança e a importância de seguir seus sonhos.",
      "Pedro Almeida - A Floresta Encantada: Em A Floresta Encantada, "
      "Joãozinho, um garoto corajoso, se depara com uma floresta misteriosa "
      "cheia de criaturas mágicas. Ao lado de seus novos amigos, ele embarca "
      "em uma missão para salvar a floresta do malvado feiticeiro. Nessa "
      "jornada repleta de magia e emoção, Joãozinho aprende sobre amizade, "
      "confiança e o poder da imaginação.",
      "Sofia Lima - O Tesouro Escondido: Nessa emocionante história de "
      "aventura, Sofia e seu fiel cachorro Max encontram um mapa antigo que "
      "leva a um tesouro escondido. Eles embarcam em uma jornada cheia de "
      "enigmas, armadilhas e descobertas surpreendentes. Ao longo do caminho, "
      "aprendem sobre coragem, trabalho em equipe e a importância de seguir "
      "seus corações."};
  char books_thriller[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Amanda Ferreira - O Mistério do Cofre Misterioso: Em O Mistério do "
      "Cofre Misterioso, Pedro e Laura encontram um cofre antigo escondido no "
      "sótão de sua avó. Determinados a descobrir o que há dentro, eles seguem "
      "pistas, decifram códigos e enfrentam desafios perigosos. Será que eles "
      "serão capazes de desvendar o segredo do cofre misterioso?",
      "Felipe Torres - O Enigma do Castelo Assombrado: Em O Enigma do Castelo "
      "Assombrado, Lucas e sua irmã Maria visitam um castelo sinistro durante "
      "as férias. Eles logo descobrem que o castelo está repleto de mistérios "
      "e fenômenos estranhos. Com coragem e inteligência, eles desvendam "
      "segredos sombrios e desmascaram os fantasmas que assombram o castelo.",
      "Sofia Almeida - O Roubo na Mansão Misteriosa: Em O Roubo na Mansão "
      "Misteriosa, Joãozinho é convidado para passar uma noite em uma mansão "
      "luxuosa. Durante a estadia, uma joia valiosa desaparece, e todos os "
      "hóspedes se tornam suspeitos. Joãozinho decide investigar o roubo, "
      "seguindo pistas e montando o quebra-cabeça para encontrar o verdadeiro "
      "ladrão.",
      "Guilherme Oliveira - A Casa dos Segredos: Nessa empolgante história de "
      "suspense, Sofia e seu amigo Pedro exploram uma casa abandonada "
      "conhecida por seus segredos sombrios. Conforme eles investigam os "
      "cômodos assustadores, encontram enigmas intrigantes e se deparam com "
      "ameaças ocultas. Eles precisam desvendar os segredos da casa antes que "
      "seja tarde demais."};
  char books_adventure[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Luana Santos - A Busca pelo Tesouro Perdido: Em A Busca pelo Tesouro "
      "Perdido, Mateus e Sofia embarcam em uma emocionante jornada em busca de "
      "um tesouro escondido. Eles enfrentam desafios, superam obstáculos e "
      "descobrem pistas misteriosas que os levam a lugares incríveis. Será que "
      "eles conseguirão encontrar o tesouro antes que caia nas mãos erradas?",
      "Gabriel Ferreira - A Ilha Misteriosa: Nessa empolgante aventura, Lucas "
      "e sua turma se perdem em uma ilha misteriosa durante um passeio "
      "escolar. Eles precisam trabalhar em equipe, explorar o ambiente "
      "desconhecido e solucionar enigmas para encontrar uma forma de voltar "
      "para casa. Será que eles conseguirão sobreviver na ilha e encontrar o "
      "caminho de volta?",
      "Laura Almeida - O Segredo da Floresta Encantada: Em O Segredo da "
      "Floresta Encantada, Pedro e Ana descobrem um mapa antigo que os leva a "
      "uma floresta cheia de criaturas mágicas e segredos ocultos. Eles se "
      "aventuram por trilhas perigosas, enfrentam desafios emocionantes e "
      "desvendam o mistério que envolve a floresta encantada. Uma história "
      "repleta de magia e emoção.",
      "Matheus Oliveira - O Mistério do Templo Esquecido: Nessa emocionante "
      "história de aventura, Clara e João exploram um templo antigo esquecido "
      "no meio da selva. Eles precisam decifrar antigas inscrições, desvendar "
      "enigmas e superar armadilhas mortais para desvendar o mistério por trás "
      "do templo. Será que eles conseguirão desvendar o segredo milenar antes "
      "que seja tarde demais?"};

  int preference;
  int gender_preference;

  printf("Voce tem preferencia por algum tipo de genero?\n\n");

  printf("[1] - Sim \n[2] - Nao\n\n");

  scanf("%d", &preference);

  switch (preference) {
  case 1:
    printf("\nTemos esses disponiveis: \n\n");
    for (int iterator = 0; iterator < MAX_STRINGS_FOR_GENDER; iterator++) {
      printf("%s\n\n", genders[iterator]);
    }
    printf("Qual voce prefere? \n\n");
    scanf("%d", &gender_preference);
    switch (gender_preference) {
    case 1:
      printf("Aqui estao livros de misterio: \n\n");
      for (int iterator = 0; iterator < BOOKS; iterator++) {
        printf("%s\n\n", books_mystery[iterator]);
      }
      break;
    case 2:
      printf("Aqui estao livros de aventura: \n\n");
      for (int iterator = 0; iterator < BOOKS; iterator++) {
        printf("%s\n\n", books_adventure[iterator]);
      }
      break;
    case 3:
      printf("Aqui estao livros de suspense: \n\n");
      for (int iterator = 0; iterator < BOOKS; iterator++) {
        printf("%s\n\n", books_thriller[iterator]);
      }
      break;
    case 4:
      printf("Aqui estao livros de fantasia: \n\n");
      for (int iterator = 0; iterator < BOOKS; iterator++) {
        printf("%s\n\n", books_fantasy[iterator]);
      }
      break;
    }
    break;
  case 2:
    printf("\nEntao teremos essas opcoes: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", general_books[iterator]);
    }
    break;
  default:
    return;
  }

  evaluation_of_recomendation();
}

void book_pre_teens() {
  char genders[MAX_STRINGS_FOR_GENDER][MAX_LENGTH_FOR_STRINGS] = {
      "[1] - Fantasia", "[2] - Misterio", "[3] - Ficcao cientifica",
      "[4] - Realismo"};
  char books_fantasy[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Roberta Lima - A Jornada dos Guardiões: Em um reino mágico ameaçado "
      "pela escuridão, quatro jovens descobrem que são os escolhidos para se "
      "tornarem os Guardiões dos elementos. Com poderes especiais, eles "
      "embarcam em uma jornada épica para salvar seu mundo da destruição "
      "iminente.",
      "Pedro Silva - O Segredo do Talismã Encantado: Uma jovem órfã descobre "
      "um "
      "talismã encantado com poderes mágicos. Ela se vê envolvida em uma "
      "antiga "
      "profecia e precisa desvendar segredos do passado para proteger seu "
      "reino "
      "da ameaça das trevas.",
      "Carla Santos - O Portal dos Sonhos: Um grupo de amigos encontra um "
      "portal "
      "mágico que os transporta para um mundo de sonhos. Lá, eles precisam "
      "enfrentar criaturas fantásticas, desafios emocionantes e desvendar o "
      "mistério por trás desse portal antes que fiquem presos para sempre.",
      "Marcos Oliveira - A Lenda do Dragão de Fogo: Em uma terra governada "
      "por um dragão temível, um jovem corajoso parte em uma jornada perigosa "
      "para encontrar a lendária Espada do Destino. Ele enfrenta criaturas "
      "místicas, supera desafios e descobre seu verdadeiro destino como o "
      "herdeiro do trono"};
  char books_mystery[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Ana Rodrigues - O Mistério do Colar Desaparecido: Em uma mansão "
      "luxuosa, um valioso colar desaparece durante uma festa. Uma detetive "
      "mirim, junto com seu fiel parceiro canino, precisa seguir pistas, "
      "desvendar segredos e identificar o culpado antes que seja tarde demais.",
      "Carlos Mendes - O Caso da Casa Assombrada: Um grupo de amigos decide "
      "explorar uma casa abandonada que dizem ser assombrada. Eles se envolvem "
      "em uma série de eventos misteriosos e precisam desvendar os segredos "
      "sombrios que assombram o local.",
      "Laura Almeida - O Enigma do Código Secreto: Laura é uma jovem espiã que "
      "recebe uma missão para decifrar um código secreto que pode revelar um "
      "plano de sabotagem. Com suas habilidades em criptografia e "
      "investigação, ela enfrenta desafios emocionantes e desvenda o mistério "
      "por trás do código.",
      "Gabriel Ferreira - O Roubo na Mansão Mistério: Um valioso artefato "
      "desaparece durante uma festa na mansão de um famoso colecionador. "
      "Gabriel, um jovem detetive talentoso, é chamado para solucionar o caso. "
      "Ele deve reunir evidências, interrogar suspeitos e desvendar o mistério "
      "por trás do roubo."};
  char books_scifi[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Felipe Costa - A Era dos Robôs: Em um futuro distante, a humanidade "
      "convive com robôs inteligentes. Um jovem cientista descobre um segredo "
      "perturbador por trás dos avanços da tecnologia e se vê envolvido em uma "
      "rebelião contra as máquinas que ameaçam a existência humana.",
      "Isabela Fernandes - O Portal Intergaláctico: Um grupo de adolescentes "
      "encontra um portal que os transporta para diferentes planetas em "
      "galáxias distantes. Eles se juntam a uma resistência intergaláctica "
      "para lutar contra um império tirânico e salvar o universo de uma ameaça "
      "iminente.",
      "Gustavo Oliveira - A Conspiração das Máquinas: Em um mundo onde os "
      "seres humanos são controlados por inteligências artificiais, um jovem "
      "hacker descobre uma conspiração que envolve as máquinas dominantes. Ele "
      "se une a um grupo de rebeldes e embarca em uma missão arriscada para "
      "libertar a humanidade do controle tecnológico.",
      "Sofia Torres - O Experimento Genético: Uma cientista brilhante cria uma "
      "nova forma de vida através de experimentos genéticos. No entanto, suas "
      "criações se tornam uma ameaça para a humanidade, e ela precisa "
      "encontrar uma maneira de controlá-las antes que causem a destruição "
      "total."};
  char books_realistic[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Pedro Rocha - O Segredo da Casa Antiga: Um garoto curioso descobre uma "
      "antiga casa abandonada em sua cidade e decide investigar sua história. "
      "Enquanto desvenda os segredos ocultos da casa, ele também aprende "
      "lições valiosas sobre amizade, família e coragem.",
      "Isabela Nunes - O Caminho da Esperança: Uma jovem órfã luta para "
      "superar os desafios da vida em um orfanato. Com determinação e "
      "otimismo, ela busca construir um futuro melhor para si mesma e para os "
      "outros residentes, inspirando-os a acreditar em um futuro cheio de "
      "esperança.",
      "Lucas Ferreira - O Mistério do Quadro Desaparecido: Em uma pequena "
      "cidade, um valioso quadro é roubado de uma galeria de arte. Lucas, um "
      "adolescente apaixonado por arte, decide investigar o caso por conta "
      "própria, seguindo pistas e desvendando segredos que revelam o "
      "verdadeiro significado da arte.",
      "Mariana Costa - A Amizade Inesperada: Uma nova aluna tímida chega a uma "
      "escola e encontra dificuldades para se adaptar. No entanto, uma amizade "
      "inesperada com um colega extrovertido transforma sua vida, "
      "ensinando-lhe sobre autoconfiança, aceitação e a importância da amizade "
      "verdadeira."};

  int choice;

  printf("Escolha algum genero: \n\n");

  for (int iterator = 0; iterator < BOOKS; iterator++) {
    printf("%s\n\n", genders[iterator]);
  }

  scanf("%d", &choice);
  switch (choice) {
  case 1:
    printf("Aqui estao livros de misterio: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_fantasy[iterator]);
    }
    break;
  case 2:
    printf("Aqui estao livros de aventura: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_mystery[iterator]);
    }
    break;
  case 3:
    printf("Aqui estao livros de suspense: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_scifi[iterator]);
    }
    break;
  case 4:
    printf("Aqui estao livros de fantasia: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_realistic[iterator]);
    }
    break;
  default:
    return;
  }
  evaluation_of_recomendation();
}

void book_teens() {
  char genders[MAX_STRINGS_FOR_GENDER][MAX_LENGTH_FOR_STRINGS] = {
      "[1] - Fantasia", "[2] - Misterio", "[3] - Ficcao cientifica",
      "[4] - Drama realista"};
  char books_fantasy[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Luana Santos - A Magia Perdida: Em um reino encantado, um jovem órfão "
      "descobre um antigo pergaminho que o leva a uma jornada épica para "
      "restaurar a magia perdida e enfrentar o mal que ameaça o mundo.",
      "Pedro Rocha - O Legado dos Dragões: Em um mundo onde humanos e dragões "
      "vivem em harmonia, um adolescente com poderes misteriosos embarca em "
      "uma missão perigosa para proteger a paz e desvendar segredos "
      "ancestrais.",
      "Carolina Lima - A Rainha dos Destinos: Uma jovem plebeia descobre ser a "
      "escolhida para ser a rainha de um reino mágico. Com a ajuda de seus "
      "amigos, ela deve enfrentar desafios e traições para cumprir seu "
      "destino.",
      "Guilherme Oliveira - O Portal das Sombras: Quando um portal mágico se "
      "abre, um grupo de adolescentes autistas é transportado para um mundo "
      "repleto de criaturas místicas. Juntos, eles precisam encontrar uma "
      "forma de voltar para casa e enfrentar seus medos internos."};
  char books_mystery[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Rodrigo Nunes - O Enigma do Farol: Quando um antigo farol é reativado "
      "misteriosamente em uma pequena cidade litorânea, um grupo de "
      "adolescentes autistas embarca em uma investigação para desvendar os "
      "segredos ocultos por trás desse fenômeno e descobrir a verdade por trás "
      "dos estranhos acontecimentos na região.",
      "Bruna Costa - O Caso do Colar Desaparecido: Em uma prestigiosa escola "
      "de internato, um colar valioso desaparece. Um grupo de jovens autistas "
      "com habilidades únicas para a observação e dedução assume o desafio de "
      "resolver esse mistério intrigante antes que os culpados escapem "
      "impunes.",
      "Guilherme Fernandes - O Segredo do Escritório 13: Um grupo de jovens "
      "autistas se reúne em um clube de mistério, onde recebem uma carta "
      "anônima desafiando-os a desvendar o segredo do misterioso Escritório "
      "13. Ao enfrentarem enigmas complexos e reviravoltas surpreendentes, "
      "eles descobrem uma conspiração oculta que pode mudar suas vidas para "
      "sempre.",
      "Amanda Rodrigues - A Mansão Assombrada: Um grupo de adolescentes "
      "autistas decide explorar uma antiga mansão abandonada, conhecida por "
      "suas histórias assustadoras. Conforme eles desvendam os segredos "
      "sombrios do local, percebem que a mansão guarda segredos mais profundos "
      "e perigosos do que imaginavam."};
  char books_scifi[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Júlia Almeida - A Cidade do Amanhã: Em um futuro distópico, uma "
      "adolescente autista descobre segredos sombrios sobre a sociedade em que "
      "vive. Com habilidades únicas, ela se torna a esperança de mudança e "
      "luta por um mundo melhor.",
      "Marcos Silva - A Era dos Androides: Em um mundo dominado por robôs e "
      "inteligência artificial, um grupo de jovens autistas se envolve em uma "
      "rebelião contra a opressão tecnológica. Eles precisam provar que a "
      "humanidade ainda tem valor.",
      "Laura Oliveira - A Viagem Estelar: Uma equipe de jovens autistas é "
      "recrutada para uma missão interestelar. Enfrentando perigos cósmicos, "
      "eles descobrem segredos sobre o universo e aprendem a importância da "
      "diversidade e inclusão.",
      "Lucas Fernandes - O Experimento Genético: Após um acidente em um "
      "laboratório, um adolescente autista desenvolve habilidades "
      "extraordinárias. Perseguido por uma organização sinistra, ele precisa "
      "usar seus poderes para desvendar a verdade por trás de sua "
      "transformação."};
  char books_realistic[BOOKS][LENGTH_FOR_SYNOPSIS] = {
      "Isabela Alves - O Poder da Amizade: Em um colégio inclusivo, um grupo "
      "de adolescentes autistas enfrenta desafios e preconceitos. Ao superarem "
      "suas diferenças, eles descobrem o poder da amizade e da aceitação.",
      "Matheus Ribeiro - Além das Aparências: Uma jovem autista é desafiada a "
      "se adaptar a um novo ambiente escolar. Confrontando estereótipos e "
      "preconceitos, ela encontra sua voz e inspira outros a verem além das "
      "aparências.",
      "Gabriela Castro - Entre o Azul e o Cinza: Uma adolescente autista narra "
      "sua jornada de autodescoberta, revelando as lutas e triunfos de viver "
      "em uma sociedade que muitas vezes não a compreende. Uma história "
      "comovente sobre aceitação e superação.",
      "Rafaela Ferreira - A Força da Arte: Uma jovem autista encontra refúgio "
      "na arte como uma forma de expressão e comunicação. Ao enfrentar "
      "obstáculos e julgamentos, ela descobre o poder transformador da "
      "criatividade e inspira outros a seguirem seus sonhos."};

  int choice;

  printf("Escolha algum genero\n\n");

  for (int iterator = 0; iterator < BOOKS; iterator++) {
    printf("%s\n\n", genders[iterator]);
  }

  scanf("%d", &choice);

  switch (choice) {
  case 1:
    printf("Aqui estao livros de misterio: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_fantasy[iterator]);
    }
    break;
  case 2:
    printf("Aqui estao livros de aventura: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_mystery[iterator]);
    }
    break;
  case 3:
    printf("Aqui estao livros de suspense: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_scifi[iterator]);
    }
    break;
  case 4:
    printf("Aqui estao livros de fantasia: \n\n");
    for (int iterator = 0; iterator < BOOKS; iterator++) {
      printf("%s\n\n", books_realistic[iterator]);
    }
    break;
  default:
    return;
  }

  evaluation_of_recomendation();
}

void registrationOptions() {
  char name[50];
  int age;

  printf("Voce poderia por favor nos informar seu nome?\n\n");

  getchar();
  fgets(name, sizeof(name), stdin);
  sscanf(name, "%s", name);

  printf("\nObrigado por informar seu nome, %s, agora e possivel "
         "prosseguirmos. Voce pode me informar sua faixa etaria? (EM ANOS)\n\n",
         name);

  printf("[1] - 4 a 9. \n[2] - 10 a 13 \n[3] - 14 a 18\n\nSe nenhuma dessas, "
         "voce nao e apto para usufruir dessa clinica.\n\n");

  scanf("%d", &age);

  switch (age) {
  case 1:
    printf("\nOtimo, iremos exibir livros para crianças de 4 a 9 anos\n");
    book_childrens();
    break;
  case 2:
    printf("Otimo, iremos exibir livros para crianças de 10 a 13 anos\n\n");
    book_pre_teens();
    break;
  case 3:
    printf("Otimo, iremos exibir livros para crianças de 14 a 18 anos");
    book_teens();
    break;
  default:
    return;
  }
}

void registrationChoice() {
  int optionRegistration;

  printf("[1] - Para sim\n[2] - Para nao\n\n");
  scanf("%d", &optionRegistration);

  switch (optionRegistration) {
  case 1:
    printf("\nOtimo! Vamos prosseguir com o cadastro.\n\n");
    registrationOptions();
    break;
  case 2:
    printf("\nEntendemos.\n");
    break;
  default:
    printf("\nProvavelmente voce teclou errado. Por favor, escolha 1 ou 2; "
           "caso contrario nosso programa de cadastro nao funciona. ");
    return;
  }
}

int main() {
  printf("Ola. Seja bem vindo a nossa clinica. Voce deseja efetuar o nosso "
         "cadastro?\n\n");

  registrationChoice();

  return 0;
}
