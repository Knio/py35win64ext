#include <Python.h>

static PyObject* helloworld(PyObject *self, PyObject *args)
{
    return PyLong_FromLong(42);
    // return PyString("Blub!");
}

static PyMethodDef helloworld_methods[] = {
    {"helloworld",  helloworld, METH_VARARGS, "Hello, World!"},
    {NULL, NULL, 0, NULL}
};


static struct PyModuleDef helloworld_module = {
   PyModuleDef_HEAD_INIT,
   "helloworld_py35win64ext",   /* name of module */
   NULL,    /* module documentation, may be NULL */
   -1,      /* size of per-interpreter state of the module,
                or -1 if the module keeps state in global variables. */
   helloworld_methods
};

PyMODINIT_FUNC PyInit_helloworld_py35win64ext(void)
{
    return PyModule_Create(&helloworld_module);
}
