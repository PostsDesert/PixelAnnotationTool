#ifndef   pixel_annotation_tool_version_h
#define   pixel_annotation_tool_version_h

# ifdef __cplusplus
extern "C" {
# endif

#define PIXEL_ANNOTATION_TOOL_ARCH            "x86_64" /*! Current archi x86 or x64 */
#define PIXEL_ANNOTATION_TOOL_GIT_BRANCH      "master" /*! Current name of the branch */
#define PIXEL_ANNOTATION_TOOL_GIT_COMMIT_HASH "202abc7" /*! Current hash of the git branch */
#define PIXEL_ANNOTATION_TOOL_GIT_DATE		     "2021-05-18 12:09:14 -0400" /*! Current date of the git branch */
#define PIXEL_ANNOTATION_TOOL_GIT_TAG	       "v1.4.0-25-g202abc7" /*! Current date of the git branch */

#if _DEBUG
#define PIXEL_ANNOTATION_TOOL_CONF_MODE					"DEBUG-x86_64" /*! Last compilation mode used */
#else
#define PIXEL_ANNOTATION_TOOL_CONF_MODE					"RELEASE-x86_64"/*! Last compilation mode used */
#endif
#define INFO_PIXEL_ANNOTATION_TOOL_VERSION			"master - v1.4.0-25-g202abc7 - 202abc7 - 2021-05-18 12:09:14 -0400 - " PIXEL_ANNOTATION_TOOL_CONF_MODE /*! Version name */

# ifdef __cplusplus
}
# endif

#endif // pixel_annotation_tool_version_h
