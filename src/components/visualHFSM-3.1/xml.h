
#include <libxml/tree.h>


typedef struct tipoId {
	
	int id;
	GnomeCanvasItem * item;	

} tId; 



void actualizar_array_id (tId *array);

/* crea la estructura xmlDoc con nodo raiz "name" */
xmlDocPtr xml_new_doc (const gchar *name);

/* Guarda la informaicon en un xml del esquema */
void xml_new_entry (xmlDocPtr doc);
void xml_new_entry_sub (xmlDocPtr doc, xmlNodePtr ptrSub);

/* Recupera la informacion de un estado y lo representa en el canvas */
void xml_get_entry (xmlNodePtr child);
