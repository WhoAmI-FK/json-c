#include <stdio.h>
#include <stdlib.h>
#include <json-c/json.h>

int main()
{
        json_object* jdata, *jnewobj;
        const char* jstring;
        jdata = json_object_new_object();
        if(jdata==NULL)
        {
                fprintf(stderr,"Unable to create new object\n");
                exit(1);
        }
        jnewobj = json_object_new_string((const char*)"George Washington");
        if(jnewobj==NULL)
        {
                fprintf(stderr, "Unable to create new string object\n");
                exit(1);
        }
        json_object_object_add(jdata,(const char*)"Name",jnewobj);
        jstring = json_object_to_json_string_ext(jdata, JSON_C_TO_STRING_PRETTY);
        puts(jstring);

        return(0);
}