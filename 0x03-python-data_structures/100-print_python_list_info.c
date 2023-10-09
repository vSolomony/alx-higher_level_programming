#include <Python.h>

/**
 * print_python_list_info - Prints information about Python lists
 * @p: Pointer to a Python object (assumed to be a list)
 */
void print_python_list_info(PyObject *p)
{
	PyListObject *list = (PyListObject *)p;

	if (p && PyList_Check(p))
	{
		Py_ssize_t size = PyList_Size(p);
		Py_ssize_t allocated = list->allocated;
		PyObject *item;
		PyTypeObject *item_type;

		printf("[*] Size of the Python List = %ld\n", size);
		printf("[*] Allocated = %ld\n", allocated);

		for (Py_ssize_t i = 0; i < size; i++)
		{
			item = PyList_GetItem(p, i);
			item_type = Py_TYPE(item);

			printf("Element %ld: %s\n", i, item->ob_type->tp_name);
		}
	}
}
