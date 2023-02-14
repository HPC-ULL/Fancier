package es.ull.pcg.hpc.fancier;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.RetentionPolicy;
import java.lang.annotation.Target;


/**
 * This annotation indicates which elements can be translated in an OpenCL target translation tool
 */
@Target({ElementType.CONSTRUCTOR, ElementType.METHOD, ElementType.FIELD })
@Retention(RetentionPolicy.CLASS)
public @interface Translatable {
}
