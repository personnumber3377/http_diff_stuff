
#include "ruby.h"






/*
VALUE dangerous_func(VALUE buffer) {
	rb_funcall(rb_mKernel, rb_intern("Rational"), 1, buffer);
	return Qnil; // Just return Qnil
}


// This is needed for rb_rescue
VALUE error_func(VALUE stuff) {
	//printf("Called error_func...\n");
	return Qnil;
}


// Main fuzzing wrapper.

#define LOOP_COUNT 100000

__AFL_FUZZ_INIT();

int main(int argc, char **argv) {
	printf("Hello world!\n");

	int state;
	//rb_protect(dangerous_func, dangerous_arg, &state);


	VALUE hello_world_str;


	//ruby_setup();

	ruby_sysinit(&argc, &argv);
	RUBY_INIT_STACK;
	ruby_init();
	ruby_init_loadpath();

	__AFL_INIT();

	unsigned char *buf = __AFL_FUZZ_TESTCASE_BUF;

	while (__AFL_LOOP(LOOP_COUNT)) {

	//while (true) {

		int len = __AFL_FUZZ_TESTCASE_LEN;

		state = 0;

		//hello_world_str = rb_str_new_cstr(buf);

		//hello_world_str = rb_str_new_cstr(buf);
		hello_world_str = rb_str_new(buf, len);

		//printf("Calling the function...\n");
		rb_rescue(dangerous_func, hello_world_str, error_func, Qnil);

		//rb_funcall(rb_mKernel, rb_intern("Rational"), 1, hello_world_str);

		//free(hello_world_str); // Try to free the allocated memory.

		// rb_funcall(rb_mKernel, rb_intern("Rational"), 1, hello_world_str);

	}

	






	ruby_finalize();

	return 0;
}

*/

