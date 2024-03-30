<h2>
    <a href="https://leetcode.com/problems/valid-palindrome">
        125. Valid Palindrome
    </a>
</h2>

<h3>Easy</h3>
<hr>
<p>

A phrase is a <strong>palindrome</strong> if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string <code>s</code>, return <code>true</code> <em>if it is a <strong>palindrome</strong>, or <code>false</code> otherwise</em>.
</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> s = "A man, a plan, a canal: Panama"
<strong>Output:</strong> true
<strong>Explanation:</strong> "amanaplanacanalpanama" is a palindrome.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> s = "race a car"
<strong>Output:</strong> false
<strong>Explanation:</strong> "raceacar" is not a palindrome.
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> s = " "
<strong>Output:</strong> true
<strong>Explanation:</strong>  is an empty string "" after removing non-alphanumeric characters. Since an empty string reads the same forward and backward, it is a palindrome.
</pre>


<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>
<ul>
	<li><code>1 <= s.length <= 2 * 10<sup>5</sup></code></li>
	<li><code>s</code> consists only of printable ASCII characters.</li>
</ul>

<p>&nbsp;</p>
<strong>Follow-up:&nbsp;</strong>Could you solve it without converting the integer to a string?
