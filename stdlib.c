#include <stdio.h>
#include <caml/mlvalues.h>

CAMLprim value
caml_print_endline(value v)
{
    printf("%s\n", String_val(v));
    return Val_unit;
}
