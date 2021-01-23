#include "eif_eiffel.h"
#include "eif_cecil.h"

#ifdef __cplusplus
extern "C" {
#endif

static char * type_key [] = {
"STRING_TABLE",
"EIFFELSTUDIO_SPECIFIC_LANGUAGE_EXCEPTION",
"HASH_TABLE_CURSOR",
"EXCEPTION_IN_SIGNAL_HANDLER_FAILURE",
"SET",
"NATURAL_64_REF",
(char *) 0,
"ARRAYED_QUEUE_ITERATION_CURSOR",
"RT_EXTENSION",
"SPECIAL",
"ANY",
"REFLECTOR_CONSTANTS",
"SYSTEM_ENCODINGS",
(char *) 0,
(char *) 0,
"RAW_FILE",
(char *) 0,
"MAIN",
"ARRAYED_LIST",
"ARGUMENTS_32",
"SYSTEM_STRING",
"ARRAY",
"FORMAT_INTEGER",
(char *) 0,
"REFLECTOR_HELPER",
"STRING_TO_NUMERIC_CONVERTOR",
"JSON_NUMBER",
"VOID_ASSIGNED_TO_EXPANDED",
"PREDICATE",
(char *) 0,
(char *) 0,
"ENCODING",
(char *) 0,
"IMMUTABLE_STRING_8",
"ITERATION_CURSOR",
"COMPARABLE",
"JSON_BOOLEAN",
"MACHINE_EXCEPTION",
"ISE_EXCEPTION_MANAGER",
"RESIZABLE",
"ACTIVE",
(char *) 0,
"TYPE",
"BOOLEAN",
"ADDRESS_APPLIED_TO_MELTED_FEATURE",
"ARGUMENTS",
"REAL_32_REF",
"EXCEPTION",
"NATIVE_STRING",
"CURSOR_STRUCTURE",
"SYSTEM_ENCODINGS_IMP",
"REFLECTOR",
(char *) 0,
"INTEGER_8",
"INTEGER_INTERVAL",
"TO_SPECIAL",
(char *) 0,
"ABSTRACT_SPECIAL",
"LOOP_INVARIANT_VIOLATION",
"MANAGED_POINTER",
(char *) 0,
"INTEGER_16",
"NATURAL_16_REF",
"EXTERNAL_FAILURE",
"EXCEPTIONS",
"COUNTABLE_SEQUENCE",
"UNIX_FILE_INFO",
(char *) 0,
"OBSOLETE_EXCEPTION",
"ARRAY_ITERATION_CURSOR",
"CHARACTER_32",
(char *) 0,
"ROUTINE_FAILURE",
"C_STRING",
"STRING_32",
"GENERAL_SPECIAL_ITERATION_CURSOR",
(char *) 0,
"JSON_STRING",
"ENCODING_I",
(char *) 0,
"LINEAR",
"COUNTABLE",
"RT_DBG_ATTRIBUTE_RECORD",
"NATURAL_32",
"OPERATING_ENVIRONMENT",
"TUPLE",
"LIST",
"NATURAL_8_REF",
"CREATE_ON_DEFERRED",
(char *) 0,
"LANGUAGE_EXCEPTION",
"RT_DBG_INTERNAL",
"INDEXABLE_ITERATION_CURSOR",
"FILE_ITERATION_CURSOR",
"OPERATING_SYSTEM_FAILURE",
"HASH_TABLE",
"ISE_RUNTIME",
"ROUTINE",
"CELL",
"REAL_64",
"LINKED_LIST_CURSOR",
"RT_EXTENSION_COMMON",
"RESCUE_FAILURE",
"HARDWARE_EXCEPTION",
"OLD_VIOLATION",
(char *) 0,
"NATURAL_64",
"CONTAINER",
"LINKED_LIST",
(char *) 0,
"ARRAYED_LIST_CURSOR",
"STRING_TO_INTEGER_CONVERTOR",
(char *) 0,
(char *) 0,
"MISMATCH_INFORMATION",
(char *) 0,
"EIFFEL_RUNTIME_PANIC",
"REFLECTED_COPY_SEMANTICS_OBJECT",
"NUMERIC",
"OBJECT_GRAPH_MARKER",
"INTEGER_64_REF",
(char *) 0,
"CSVHANDLER",
(char *) 0,
"INTEGER_64",
"INVARIANT_VIOLATION",
(char *) 0,
"PRECONDITION_VIOLATION",
"RT_DBG_EXECUTION_RECORDER",
"NO_MORE_MEMORY",
"TABLE",
"ITERABLE",
"INTEGER_16_REF",
"TYPED_POINTER",
(char *) 0,
"FILE_INFO",
(char *) 0,
(char *) 0,
"HASHABLE",
(char *) 0,
"UNBOUNDED",
"PROCEDURE",
"NATIVE_ARRAY",
(char *) 0,
(char *) 0,
"RESUMPTION_FAILURE",
"NATURAL_32_REF",
"IO_FAILURE",
"RT_DBG_EXECUTION_PARAMETERS",
"EXCEP_CONST",
(char *) 0,
"EIF_EXCEPTION",
"TABLE_ITERATION_CURSOR",
"EXCEPTION_MANAGER_FACTORY",
"IMMUTABLE_STRING_GENERAL",
"ENCODING_HELPER",
"PLATFORM",
"JSON_ARRAY",
"RT_DBG_CALL_RECORD",
"JSON_VALUE",
"ARRAYED_LIST_ITERATION_CURSOR",
(char *) 0,
"BOX",
"STRING_GENERAL",
"STRING_8",
"QUEUE",
"MISMATCH_CORRECTOR",
"IMMUTABLE_STRING_32",
(char *) 0,
(char *) 0,
"STRING_SEARCHER",
"DISPENSER",
(char *) 0,
(char *) 0,
(char *) 0,
"COLLECTION",
"RT_EXTENSION_GENERAL",
"POINTER_REF",
(char *) 0,
"INFINITE",
"CHAIN",
(char *) 0,
"STRING_32_ITERATION_CURSOR",
"INDEXABLE",
(char *) 0,
"READABLE_STRING_GENERAL",
"BAG",
"SYSTEM_STRING_FACTORY",
"READABLE_STRING_32",
"NATURAL_16",
(char *) 0,
(char *) 0,
"SPECIAL_ITERATION_CURSOR",
(char *) 0,
"COM_FAILURE",
"VARIANT_VIOLATION",
(char *) 0,
"PRIMES",
(char *) 0,
"OPERATING_SYSTEM_EXCEPTION",
"JSON_VISITOR",
"ASSERTION_VIOLATION",
"POINTER",
(char *) 0,
(char *) 0,
(char *) 0,
"HEXADECIMAL_STRING_TO_INTEGER_CONVERTER",
"CODE_PAGE_CONSTANTS",
"EXCEPTION_MANAGER",
"EXECUTION_ENVIRONMENT",
"CHARACTER_8",
"STRING_ITERATION_CURSOR",
"INTEGER_OVERFLOW_CHECKER",
"NUMERIC_INFORMATION",
"RT_DBG_COMMON",
"LINKED_LIST_ITERATION_CURSOR",
"INTEGER_32_REF",
"STD_FILES",
"RT_DBG_FIELD_RECORD",
"READABLE_STRING_8",
"HASH_TABLE_ITERATION_CURSOR",
"SEQUENCE",
"REAL_64_REF",
(char *) 0,
"TRAVERSABLE",
(char *) 0,
"CONSOLE",
"DYNAMIC_CHAIN",
"RT_DBG_LOCAL_RECORD",
"DYNAMIC_TABLE",
(char *) 0,
"MISMATCH_FAILURE",
(char *) 0,
"CHARACTER_32_REF",
"PLAIN_TEXT_FILE",
(char *) 0,
"CHECK_VIOLATION",
"DISPOSABLE",
"CODE_PAGES",
"CHARACTER_8_REF",
"BOOLEAN_REF",
(char *) 0,
"OBJECT_GRAPH_TRAVERSABLE",
"STRING_32_SEARCHER",
"SYSTEM_ENCODINGS_I",
"SYS_EXCEPTION",
"EIFFEL_RUNTIME_EXCEPTION",
"INTERNAL",
"ARRAYED_QUEUE",
(char *) 0,
"REAL_32",
"STRING_8_ITERATION_CURSOR",
"TABLE_ITERABLE",
"STRING_HANDLER",
"DATABASE",
"POSTCONDITION_VIOLATION",
"LINKABLE",
(char *) 0,
"REFACTORING_HELPER",
"FUNCTION",
"DEVELOPER_EXCEPTION",
"FLOATING_POINT_FAILURE",
"STRING_TO_REAL_CONVERTOR",
"DOUBLE_MATH",
"OBJECT_GRAPH_BREADTH_FIRST_TRAVERSABLE",
"INTEGER_8_REF",
"CURSOR",
(char *) 0,
"IO_MEDIUM",
"VOID_TARGET",
"BAD_INSPECT_VALUE",
"DYNAMIC_LIST",
"JSON_NULL",
"STRING_8_SEARCHER",
"BOUNDED",
"INTEGER_32",
"READABLE_INDEXABLE_ITERATION_CURSOR",
"ENCODING_IMP",
"RT_DBG_VALUE_RECORD",
"REFLECTED_REFERENCE_OBJECT",
"CHARACTER_PROPERTY",
"BILINEAR",
"TYPED_INDEXABLE_ITERATION_CURSOR",
"FILE",
"OPERATING_SYSTEM_SIGNAL_FAILURE",
"APPLICATION",
"UTF_CONVERTER",
"FINITE",
"REFLECTED_OBJECT",
(char *) 0,
"PATH",
"DEBUG_OUTPUT",
"UNICODE_CONVERSION",
(char *) 0,
"MATH_CONST",
"FORMAT_DOUBLE",
"JSON_OBJECT",
"READABLE_INDEXABLE",
(char *) 0,
"DATA_EXCEPTION",
"NATIVE_STRING_HANDLER",
"SERIALIZATION_FAILURE",
(char *) 0,
"PART_COMPARABLE",
(char *) 0,
"VERSIONABLE",
"NATURAL_8",
};

static uint32 patterns143 [] = {
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types143 [] = {
549,
593,
};

static uint32 patterns188 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types188 [] = {
600,
};

static uint32 patterns229 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types229 [] = {
739,
};

static uint32 patterns3 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types3 [] = {
230,
253,
290,
333,
392,
428,
464,
500,
530,
556,
675,
773,
};

static uint32 patterns50 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types50 [] = {
201,
265,
301,
336,
366,
402,
438,
474,
535,
567,
686,
747,
};

static uint32 patterns5 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types5 [] = {
234,
264,
300,
335,
364,
400,
436,
472,
534,
566,
685,
745,
};

static uint32 patterns10 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types10 [] = {
663,
};

static uint32 patterns47 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types47 [] = {
199,
261,
297,
330,
372,
408,
444,
480,
512,
563,
682,
753,
};

static uint32 patterns51 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types51 [] = {
235,
285,
321,
356,
395,
431,
467,
503,
543,
587,
706,
776,
};

static uint32 patterns190 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types190 [] = {
221,
276,
312,
347,
383,
419,
455,
491,
523,
578,
697,
764,
};

static uint32 patterns12 [] = {
SK_REF,
SK_POINTER,
SK_POINTER,
SK_REAL64,
SK_REAL32,
SK_UINT8,
SK_UINT16,
SK_UINT32,
SK_UINT64,
SK_INT8,
SK_INT16,
SK_INT32,
SK_INT64,
SK_CHAR8,
SK_BOOL,
SK_CHAR32,
SK_POINTER,
SK_POINTER,
SK_EXP + 13,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types12 [] = {
196,
200,
205,
240,
241,
242,
243,
244,
245,
246,
247,
248,
249,
250,
251,
255,
363,
604,
605,
609,
613,
617,
621,
625,
629,
633,
637,
641,
658,
662,
667,
};

static uint32 patterns131 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types131 [] = {
220,
275,
311,
346,
382,
418,
454,
490,
522,
577,
696,
763,
};

static uint32 patterns53 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types53 [] = {
237,
252,
289,
358,
397,
433,
469,
505,
545,
589,
708,
778,
};

static uint32 patterns140 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types140 [] = {
711,
};

static uint32 patterns49 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types49 [] = {
238,
288,
324,
360,
399,
435,
471,
507,
547,
591,
710,
780,
};

static uint32 patterns125 [] = {
SK_REF,
SK_REF,
SK_CHAR32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_UINT16,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_UINT64,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types125 [] = {
233,
263,
299,
326,
394,
430,
466,
502,
533,
565,
684,
775,
};

static uint32 patterns48 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types48 [] = {
217,
273,
309,
344,
380,
416,
452,
488,
520,
575,
694,
761,
};

static uint32 patterns197 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types197 [] = {
716,
};

static uint32 patterns207 [] = {
SK_UINT32,
SK_INT32,
SK_UINT16,
SK_BOOL,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_UINT8,
SK_REF,
SK_REAL32,
SK_REAL64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types207 [] = {
601,
606,
610,
614,
618,
622,
626,
630,
634,
638,
642,
653,
655,
659,
664,
};

static uint32 patterns153 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types153 [] = {
211,
267,
303,
338,
374,
410,
446,
482,
537,
569,
688,
755,
};

static uint32 patterns128 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types128 [] = {
197,
259,
295,
328,
370,
406,
442,
478,
517,
561,
680,
751,
};

static uint32 patterns90 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types90 [] = {
509,
550,
594,
741,
};

static uint32 patterns7 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types7 [] = {
206,
};

static uint32 patterns78 [] = {
SK_INT32,
SK_REF,
SK_CHAR32,
SK_UINT64,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types78 [] = {
508,
592,
720,
722,
};

static uint32 patterns202 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types202 [] = {
715,
736,
};

static uint32 patterns191 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types191 [] = {
214,
270,
306,
341,
377,
413,
449,
485,
513,
572,
691,
758,
};

static uint32 patterns160 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types160 [] = {
712,
733,
};

static uint32 patterns138 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_UINT64,
SK_INT32,
SK_INT32,
SK_REF,
SK_BOOL,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types138 [] = {
224,
279,
315,
350,
386,
422,
458,
494,
526,
552,
581,
596,
700,
767,
};

static uint32 patterns46 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types46 [] = {
198,
260,
296,
329,
371,
407,
443,
479,
511,
562,
681,
752,
};

static uint32 patterns11 [] = {
SK_REF,
SK_UINT8,
SK_UINT32,
SK_INT32,
SK_UINT16,
SK_BOOL,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_REAL32,
SK_REAL64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types11 [] = {
204,
362,
603,
608,
612,
616,
620,
624,
628,
632,
636,
640,
657,
661,
666,
};

static uint32 patterns171 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types171 [] = {
228,
283,
319,
354,
390,
426,
462,
498,
527,
585,
704,
771,
};

static uint32 patterns8 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types8 [] = {
202,
};

static uint32 patterns42 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types42 [] = {
231,
254,
291,
334,
365,
401,
437,
473,
531,
557,
676,
746,
};

static uint32 patterns211 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types211 [] = {
529,
554,
598,
743,
};

static uint32 patterns135 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types135 [] = {
239,
287,
323,
359,
398,
434,
470,
506,
546,
590,
709,
779,
};

static uint32 patterns221 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types221 [] = {
216,
272,
308,
343,
379,
415,
451,
487,
519,
574,
693,
760,
};

static uint32 patterns230 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types230 [] = {
740,
};

static uint32 patterns231 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types231 [] = {
643,
};

static uint32 patterns220 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types220 [] = {
223,
278,
314,
349,
385,
421,
457,
493,
525,
580,
699,
766,
};

static uint32 patterns222 [] = {
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types222 [] = {
717,
};

static uint32 patterns200 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types200 [] = {
212,
268,
304,
339,
375,
411,
447,
483,
538,
570,
689,
756,
};

static uint32 patterns52 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_UINT64,
SK_INT32,
SK_BOOL,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types52 [] = {
213,
269,
305,
340,
376,
412,
448,
484,
539,
571,
690,
757,
};

static uint32 patterns195 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types195 [] = {
222,
277,
313,
348,
384,
420,
456,
492,
524,
579,
698,
765,
};

static uint32 patterns41 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types41 [] = {
232,
262,
298,
325,
393,
429,
465,
501,
532,
564,
683,
774,
};

static uint32 patterns203 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types203 [] = {
713,
734,
};

static uint32 patterns206 [] = {
SK_BOOL,
SK_CHAR32,
SK_INT32,
SK_INT64,
SK_INT8,
SK_INT16,
SK_UINT32,
SK_UINT8,
SK_UINT16,
SK_CHAR8,
SK_REF,
SK_UINT64,
SK_REAL64,
SK_POINTER,
SK_REAL32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types206 [] = {
644,
645,
646,
647,
648,
649,
650,
651,
652,
654,
718,
719,
721,
723,
737,
};

static uint32 patterns170 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types170 [] = {
528,
553,
597,
742,
};

static uint32 patterns133 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types133 [] = {
225,
280,
316,
351,
387,
423,
459,
495,
540,
582,
701,
768,
};

static uint32 patterns132 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types132 [] = {
218,
274,
310,
345,
381,
417,
453,
489,
521,
576,
695,
762,
};

static uint32 patterns194 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types194 [] = {
227,
282,
318,
353,
389,
425,
461,
497,
542,
584,
703,
770,
};

static uint32 patterns205 [] = {
SK_CHAR32,
SK_BOOL,
SK_INT16,
SK_INT64,
SK_INT32,
SK_UINT8,
SK_UINT32,
SK_REF,
SK_CHAR8,
SK_INT8,
SK_REAL32,
SK_REAL64,
SK_UINT16,
SK_UINT64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types205 [] = {
668,
669,
670,
671,
672,
673,
674,
725,
726,
727,
728,
729,
730,
731,
732,
};

static uint32 patterns82 [] = {
SK_REF,
SK_INT32,
SK_CHAR32,
SK_INT32,
SK_CHAR8,
SK_INT32,
SK_UINT16,
SK_INT32,
SK_POINTER,
SK_INT32,
SK_REAL32,
SK_INT32,
SK_REAL64,
SK_INT32,
SK_UINT8,
SK_INT32,
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_UINT64,
SK_INT32,
SK_INT32,
SK_REF,
SK_BOOL,
SK_INT32,
SK_UINT32,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types82 [] = {
229,
284,
320,
355,
391,
427,
463,
499,
510,
551,
586,
595,
705,
772,
};

static uint32 patterns223 [] = {
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types223 [] = {
738,
};

static uint32 patterns172 [] = {
SK_INT32,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_REF,
SK_REF,
SK_INT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types172 [] = {
548,
555,
599,
744,
};

static uint32 patterns204 [] = {
SK_INT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types204 [] = {
714,
735,
};

static uint32 patterns9 [] = {
SK_REF,
SK_BOOL,
SK_REF,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types9 [] = {
219,
724,
};

static uint32 patterns136 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types136 [] = {
207,
266,
302,
337,
367,
403,
439,
475,
536,
568,
687,
748,
};

static uint32 patterns137 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types137 [] = {
236,
286,
322,
357,
396,
432,
468,
504,
544,
588,
707,
777,
};

static uint32 patterns127 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types127 [] = {
208,
257,
293,
332,
368,
404,
440,
476,
515,
559,
678,
749,
};

static uint32 patterns192 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types192 [] = {
226,
281,
317,
352,
388,
424,
460,
496,
541,
583,
702,
769,
};

static uint32 patterns187 [] = {
SK_REF,
SK_REF,
SK_CHAR32,
SK_REF,
SK_CHAR8,
SK_REF,
SK_UINT16,
SK_REF,
SK_POINTER,
SK_REF,
SK_REAL32,
SK_REF,
SK_REAL64,
SK_REF,
SK_UINT8,
SK_REF,
SK_INT32,
SK_REF,
SK_UINT64,
SK_REF,
SK_BOOL,
SK_REF,
SK_UINT32,
SK_REF,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types187 [] = {
210,
258,
294,
327,
373,
409,
445,
481,
516,
560,
679,
754,
};

static uint32 patterns193 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types193 [] = {
215,
271,
307,
342,
378,
414,
450,
486,
518,
573,
692,
759,
};

static uint32 patterns44 [] = {
SK_REF,
SK_CHAR32,
SK_CHAR8,
SK_UINT16,
SK_POINTER,
SK_REAL32,
SK_REAL64,
SK_UINT8,
SK_INT32,
SK_UINT64,
SK_BOOL,
SK_UINT32,
SK_INVALID
};

static EIF_TYPE_INDEX dyn_types44 [] = {
209,
256,
292,
331,
369,
405,
441,
477,
514,
558,
677,
750,
};

static struct cecil_info type_val[] = {
{(int) 1, (EIF_TYPE_INDEX) 0, patterns143, dyn_types143},
{(int) 0, (EIF_TYPE_INDEX) 79, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 97, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 60, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns188, dyn_types188},
{(int) 0, (EIF_TYPE_INDEX) 170, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns229, dyn_types229},
{(int) 0, (EIF_TYPE_INDEX) 37, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns3, dyn_types3},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 102, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 7, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 121, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 4, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns50, dyn_types50},
{(int) 0, (EIF_TYPE_INDEX) 117, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 11, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns5, dyn_types5},
{(int) 0, (EIF_TYPE_INDEX) 18, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 29, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 44, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 187, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 76, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns10, dyn_types10},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 8, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 183, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns47, dyn_types47},
{(int) 0, (EIF_TYPE_INDEX) 90, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 186, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 52, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 32, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns51, dyn_types51},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns190, dyn_types190},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns12, dyn_types12},
{(int) 0, (EIF_TYPE_INDEX) 169, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 80, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 113, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 155, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 50, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 101, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns131, dyn_types131},
{(int) 0, (EIF_TYPE_INDEX) 24, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 104, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 145, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 123, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns53, dyn_types53},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 128, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 85, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 92, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 142, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 149, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 69, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 49, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns140, dyn_types140},
{(int) 0, (EIF_TYPE_INDEX) 111, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 59, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns49, dyn_types49},
{(int) 0, (EIF_TYPE_INDEX) 163, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 78, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 94, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 181, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns125, dyn_types125},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 190, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 193, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns48, dyn_types48},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns197, dyn_types197},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns207, dyn_types207},
{(int) 0, (EIF_TYPE_INDEX) 148, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 16, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 133, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns153, dyn_types153},
{(int) 0, (EIF_TYPE_INDEX) 152, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 81, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 74, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 106, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns128, dyn_types128},
{(int) 0, (EIF_TYPE_INDEX) 112, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 57, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns90, dyn_types90},
{(int) 0, (EIF_TYPE_INDEX) 15, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns7, dyn_types7},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns78, dyn_types78},
{(int) 0, (EIF_TYPE_INDEX) 160, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns202, dyn_types202},
{(int) 0, (EIF_TYPE_INDEX) 35, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 62, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 53, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 64, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 172, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns191, dyn_types191},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns160, dyn_types160},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 98, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 45, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 125, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 65, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 108, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 130, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 25, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 134, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 3, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 136, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 88, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 84, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 107, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 68, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns138, dyn_types138},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns46, dyn_types46},
{(int) 0, (EIF_TYPE_INDEX) 140, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns11, dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 110, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 131, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns171, dyn_types171},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns8, dyn_types8},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns42, dyn_types42},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 61, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 146, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 73, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 12, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 33, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 66, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns211, dyn_types211},
{(int) 0, (EIF_TYPE_INDEX) 48, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 177, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 20, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 34, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 188, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 127, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 185, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns135, dyn_types135},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns221, dyn_types221},
{(int) 0, (EIF_TYPE_INDEX) 178, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 184, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns230, dyn_types230},
{(int) 0, (EIF_TYPE_INDEX) 124, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 180, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 39, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns231, dyn_types231},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns220, dyn_types220},
{(int) 0, (EIF_TYPE_INDEX) 36, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 173, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns222, dyn_types222},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns200, dyn_types200},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 115, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns52, dyn_types52},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 176, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns195, dyn_types195},
{(int) 0, (EIF_TYPE_INDEX) 9, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 179, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 151, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns41, dyn_types41},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 56, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 86, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 119, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 55, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 1, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 82, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 175, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 47, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 6, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 31, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 100, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 166, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 114, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 43, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 42, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 38, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns203, dyn_types203},
{(int) 0, (EIF_TYPE_INDEX) 137, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 17, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns206, dyn_types206},
{(int) 0, (EIF_TYPE_INDEX) 182, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns170, dyn_types170},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns133, dyn_types133},
{(int) 0, (EIF_TYPE_INDEX) 158, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns132, dyn_types132},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 192, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns194, dyn_types194},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns205, dyn_types205},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns82, dyn_types82},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 72, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 161, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 122, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 87, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 91, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 19, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 164, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 167, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 21, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 40, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 23, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 63, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 67, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 105, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns223, dyn_types223},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 157, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 116, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns172, dyn_types172},
{(int) 0, (EIF_TYPE_INDEX) 93, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 2, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 83, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns204, dyn_types204},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 30, NULL, NULL},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns9, dyn_types9},
{(int) 0, (EIF_TYPE_INDEX) 51, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 54, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 46, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 27, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 22, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 143, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 96, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 95, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 75, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 77, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns136, dyn_types136},
{(int) 0, (EIF_TYPE_INDEX) 189, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 41, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns137, dyn_types137},
{(int) 0, (EIF_TYPE_INDEX) 139, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns127, dyn_types127},
{(int) 0, (EIF_TYPE_INDEX) 194, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 129, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 109, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 10, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns192, dyn_types192},
{(int) 2, (EIF_TYPE_INDEX) 0, patterns187, dyn_types187},
{(int) 0, (EIF_TYPE_INDEX) 120, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 58, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 118, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 14, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns193, dyn_types193},
{(int) 0, (EIF_TYPE_INDEX) 103, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 132, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 126, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 195, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 26, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 28, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 191, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, patterns44, dyn_types44},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 70, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 99, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 71, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 89, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 5, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 154, NULL, NULL},
};

struct ctable egc_ce_type_init = {(int32) 307, sizeof(struct cecil_info),type_key, (char *) type_val};

static char * exp_type_key [] = {
(char *) 0,
"NATURAL_32",
"BOOLEAN",
"NATURAL_8",
(char *) 0,
(char *) 0,
"NATURAL_64",
(char *) 0,
"INTEGER_32",
"CHARACTER_8",
"UTF_CONVERTER",
(char *) 0,
"INTEGER_8",
"INTEGER_16",
"REAL_32",
"POINTER",
"CHARACTER_32",
"TYPED_POINTER",
(char *) 0,
"INTEGER_64",
(char *) 0,
"REAL_64",
"NATURAL_16",
};

static uint32 exp_patterns11 [] = {
SK_REF,
SK_UINT8,
SK_UINT32,
SK_INT32,
SK_UINT16,
SK_BOOL,
SK_CHAR32,
SK_CHAR8,
SK_INT64,
SK_INT16,
SK_INT8,
SK_UINT64,
SK_REAL32,
SK_REAL64,
SK_POINTER,
SK_INVALID
};

static EIF_TYPE_INDEX exp_dyn_types11 [] = {
203,
361,
602,
607,
611,
615,
619,
623,
627,
631,
635,
639,
656,
660,
665,
};

static struct cecil_info exp_type_val[] = {
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 147, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 168, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 153, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 171, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 138, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 165, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 13, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 144, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 141, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 156, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 174, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 162, NULL, NULL},
{(int) 1, (EIF_TYPE_INDEX) 0, exp_patterns11, exp_dyn_types11},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 135, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 0, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 159, NULL, NULL},
{(int) 0, (EIF_TYPE_INDEX) 150, NULL, NULL},
};

struct ctable egc_ce_exp_type_init = {(int32) 23, sizeof(struct cecil_info),exp_type_key, (char *) exp_type_val};


#ifdef __cplusplus
}
#endif
