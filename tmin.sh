#!/bin/sh

export AFL_AUTORESUME=1
export ASAN_OPTIONS="detect_odr_violation=0:detect_leaks=0:abort_on_error=1:symbolize=0"
export PYTHONPATH=.
# export AFL_PYTHON_MODULE="mutator"
# export AFL_IGNORE_SEED_PROBLEMS=1
ASAN_OPTIONS="detect_odr_violation=0:detect_leaks=0:abort_on_error=1:symbolize=0" AFL_AUTORESUME=1 afl-tmin -i crash.bin -o minimized_crash -- ./pitchfork_http
