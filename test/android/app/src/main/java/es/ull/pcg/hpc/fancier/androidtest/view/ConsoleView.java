/*
 * Fancier: Unified Java, JNI and OpenCL Integration High-Performance GPGPU API.
 * Copyright (C) 2021 Universidad de La Laguna.
 *
 * Fancier is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * Fancier is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Fancier.  If not, see <https://www.gnu.org/licenses/>.
 */

package es.ull.pcg.hpc.fancier.androidtest.view;


import android.content.Context;
import android.text.Spanned;
import android.util.AttributeSet;
import android.util.Log;
import android.view.View;
import android.view.ViewParent;
import android.widget.ScrollView;

import androidx.annotation.NonNull;
import androidx.annotation.Nullable;
import androidx.appcompat.widget.AppCompatTextView;
import androidx.core.content.ContextCompat;
import androidx.core.text.HtmlCompat;

import es.ull.pcg.hpc.fancier.androidtest.R;


public class ConsoleView extends AppCompatTextView {
  public ConsoleView(@NonNull Context context) {
    super(context);
  }

  public ConsoleView(@NonNull Context context, @Nullable AttributeSet attrs) {
    super(context, attrs);
  }

  public ConsoleView(@NonNull Context context, @Nullable AttributeSet attrs, int defStyleAttr) {
    super(context, attrs, defStyleAttr);
  }

  public void log(CharSequence text, MessageType type) {
    String str = text.toString().replace("\n", "<br/>");
    int colorRes = R.color.textPrimary;
    int tag = R.string.info_tag;
    int priority = Log.INFO;

    switch (type) {
    case MSG_SUCCESS:
      colorRes = R.color.textSuccess;
      tag = R.string.success_tag;
      break;
    case MSG_WARNING:
      colorRes = R.color.textWarning;
      tag = R.string.warning_tag;
      priority = Log.WARN;
      break;
    case MSG_ERROR:
      colorRes = R.color.textError;
      tag = R.string.error_tag;
      priority = Log.ERROR;
      break;
    }

    Spanned logcatMessage = HtmlCompat.fromHtml(str, HtmlCompat.FROM_HTML_MODE_COMPACT);
    Log.println(priority, getResources().getString(tag), logcatMessage.toString());
    printMessage(str, colorRes);
  }

  public void logInfo(CharSequence text) {
    log(text, MessageType.MSG_INFO);
  }

  public void logSuccess(CharSequence text) {
    log(text, MessageType.MSG_SUCCESS);
  }

  public void logWarning(CharSequence text) {
    log(text, MessageType.MSG_WARNING);
  }

  public void logError(CharSequence text) {
    log(text, MessageType.MSG_ERROR);
  }

  private void printMessage(String text, int colorRes) {
    String fmt = "<u>%1$tT</u>&gt; ";
    append(HtmlCompat.fromHtml(String.format(getTextLocale(), fmt, System.currentTimeMillis()),
                               HtmlCompat.FROM_HTML_MODE_COMPACT));

    int color = ContextCompat.getColor(getContext(), colorRes);
    append(HtmlCompat.fromHtml(TextFormatter.formatColor(text, color),
                               HtmlCompat.FROM_HTML_MODE_COMPACT));

    append("\n");

    // Scroll to the bottom
    ViewParent parent = getParent();
    if (parent instanceof ScrollView) {
      final ScrollView scroll = (ScrollView) parent;
      scroll.post(new Runnable() {
        @Override
        public void run() {
          scroll.fullScroll(View.FOCUS_DOWN);
        }
      });
    }
    else {
      Log.e("ConsoleView", "Cannot automatically scroll to the bottom");
    }
  }

  public enum MessageType {
    MSG_INFO, MSG_SUCCESS, MSG_WARNING, MSG_ERROR
  }
}
